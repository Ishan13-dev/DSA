// Problem 18: Character Frequency
// Count how often each character appears, including spaces and punctuation; display only nonzero entries.
#include <stdio.h>
int main(){char s[500];int freq[256]={0};printf("Enter text: ");fgets(s,sizeof(s),stdin);for(int i=0;s[i]&&s[i]!='\n';i++)freq[(unsigned char)s[i]]++;for(int i=0;i<256;i++)if(freq[i]){if(i>=32&&i<=126)printf("'%c' : %d\n",i,freq[i]);else printf("ASCII %d : %d\n",i,freq[i]);}return 0;}
