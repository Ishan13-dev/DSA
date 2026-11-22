// Problem 19: Find Duplicate Characters
// Print each repeated character once, with its count; whitespace is ignored.
#include <stdio.h>
int main(){char s[500];int freq[256]={0},shown[256]={0};printf("Enter text: ");fgets(s,sizeof(s),stdin);for(int i=0;s[i]&&s[i]!='\n';i++)if(s[i]!=' ')freq[(unsigned char)s[i]]++;int found=0;for(int i=0;s[i]&&s[i]!='\n';i++){unsigned char ch=s[i];if(ch!=' '&&freq[ch]>1&&!shown[ch]){printf("%c appears %d times\n",ch,freq[ch]);shown[ch]=1;found=1;}}if(!found)puts("No duplicate characters");return 0;}
