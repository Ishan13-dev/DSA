// Problem 20: Remove Duplicate Characters
// Keep only the first occurrence of each character, preserving order; spaces are preserved too.
#include <stdio.h>
int main(){char s[500],out[500];int seen[256]={0},j=0;printf("Enter text: ");fgets(s,sizeof(s),stdin);for(int i=0;s[i]&&s[i]!='\n';i++){unsigned char ch=s[i];if(!seen[ch]){seen[ch]=1;out[j++]=s[i];}}out[j]='\0';printf("Without duplicates: %s\n",out);return 0;}
