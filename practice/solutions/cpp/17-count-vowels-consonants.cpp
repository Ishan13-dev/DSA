// Problem 17: Count Vowels and Consonants
// Count alphabetic letters only; spaces, digits, and punctuation are ignored.
#include <iostream>
#include <cctype>
using namespace std;
int main(){string s;int v=0,c=0;cout<<"Enter text: ";getline(cin,s);for(char ch:s){ch=tolower((unsigned char)ch);if(ch>='a'&&ch<='z'){if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')v++;else c++;}}cout<<"Vowels = "<<v<<"\nConsonants = "<<c<<"\n";}
