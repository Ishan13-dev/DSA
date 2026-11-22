// Problem 15: Sum of Digits
// Extract digits using remainder by 10 and add them; ignore sign.
#include <stdio.h>
int main(){int n,sum=0;printf("Enter integer: ");scanf("%d",&n);if(n<0)n=-n;while(n>0){sum+=n%10;n/=10;}printf("Digit sum = %d\n",sum);return 0;}
