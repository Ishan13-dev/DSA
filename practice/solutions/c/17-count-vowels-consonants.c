// Problem 17: Count Vowels and Consonants
// Count alphabetic letters only; spaces, digits, and punctuation are ignored.
#include <stdio.h>
#include <ctype.h>
int main(){char s[500];int v=0,c=0;printf("Enter text: ");fgets(s,sizeof(s),stdin);for(int i=0;s[i];i++){char ch=tolower((unsigned char)s[i]);if(ch>='a'&&ch<='z'){if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')v++;else c++;}}printf("Vowels = %d\nConsonants = %d\n",v,c);return 0;}
