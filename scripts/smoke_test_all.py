#!/usr/bin/env python3
"""Compile and run a basic representative input for each of the 40 solutions."""
from pathlib import Path
import subprocess
import tempfile

ROOT = Path(__file__).resolve().parents[1]

# (input, expected output). Whitespace is normalized before comparing.
CASES = {
    1: ("hello\n", "olleh"),
    2: ("level\n", "Palindrome"),
    3: ("121\n", "Palindrome"),
    4: ("12345\n", "54321"),
    5: ("17\n", "Prime"),
    6: ("10 20\n", "11 13 17 19"),
    7: ("5\n", "120"),
    8: ("7\n", "0 1 1 2 3 5 8"),
    9: ("7\n", "13"),
    10: ("153\n", "Armstrong number"),
    11: ("28\n", "Perfect number"),
    12: ("18 24\n", "GCD = 6"),
    13: ("12 18\n", "LCM = 36"),
    14: ("-12345\n", "Digit count = 5"),
    15: ("-12345\n", "Digit sum = 15"),
    16: ("I love C programming\n", "programming C love I"),
    17: ("Hello world\n", "Vowels = 3\nConsonants = 7"),
    18: ("aba\n", "'a' : 2\n'b' : 1"),
    19: ("banana\n", "a appears 3 times\nn appears 2 times"),
    20: ("banana\n", "Without duplicates: ban"),
    21: ("listen silent\n", "Anagrams"),
    22: ("swiss\n", "w"),
    23: ("5\n3 9 2 7 5\n", "9"),
    24: ("5\n3 9 2 7 5\n", "2"),
    25: ("5\n3 9 2 7 5\n", "7"),
    26: ("5\n3 9 2 7 5\n", "3"),
    27: ("5\n1 2 3 4 5\n", "15"),
    28: ("5\n1 2 3 4 5\n", "5 4 3 2 1"),
    29: ("5\n1 2 2 3 4\n", "Sorted"),
    30: ("6\n1 2 1 3 2 4\n", "1 2 3 4"),
    31: ("6\n1 2 2 3 3 3\n", "2 3"),
    32: ("5\n1 2 4 5\n", "3"),
    33: ("5\n1 2 1 3 2\n", "1 occurs 2 times\n2 occurs 2 times\n3 occurs 1 times"),
    34: ("4\n1 2 2 3\n3\n2 4 2\n", "2"),
    35: ("3\n1 3 5\n3\n2 4 6\n", "1 2 3 4 5 6"),
    36: ("4\n1 2 2 3\n3\n2 4 2\n", "2"),
    37: ("3\n1 2 2\n3\n2 3 4\n", "1 2 3 4"),
    38: ("5\n0 1 0 3 12\n", "1 3 12 0 0"),
    39: ("5\n3 9 2 7 5\n", "Difference = 7"),
    40: ("4\n2 7 11 15\n9\n", "2 7"),
}

def normalized(value: str) -> str:
    return " ".join(value.strip().split())

def main() -> None:
    compilers = {
        "c": ("gcc", "-std=c11"),
        "cpp": ("g++", "-std=c++17"),
    }
    with tempfile.TemporaryDirectory(prefix="dsa-smoke-") as temp_dir:
        build_dir = Path(temp_dir)
        for language, (compiler, standard) in compilers.items():
            extension = ".c" if language == "c" else ".cpp"
            solution_dir = ROOT / "practice" / "solutions" / language
            for question in range(1, 41):
                source = next(solution_dir.glob(f"{question:02d}-*{extension}"))
                executable = build_dir / f"{language}-{question:02d}"
                subprocess.run(
                    [compiler, standard, "-Wall", "-Wextra", str(source), "-o", str(executable)],
                    check=True,
                    capture_output=True,
                    text=True,
                )
                test_input, expected = CASES[question]
                result = subprocess.run(
                    [str(executable)],
                    input=test_input,
                    capture_output=True,
                    text=True,
                    timeout=5,
                    check=True,
                )
                if normalized(result.stdout) != normalized(expected):
                    raise AssertionError(
                        f"{language} Q{question:02d} failed\n"
                        f"Input: {test_input!r}\n"
                        f"Expected: {expected!r}\n"
                        f"Actual: {result.stdout!r}\n"
                        f"Stderr: {result.stderr!r}"
                    )
            print(f"{language.upper()}: all 40 sample smoke tests passed.")
    print("All 80 C/C++ solution sample smoke tests passed.")

if __name__ == "__main__":
    main()
