// Problem 14: Count Digits in a Number
// Divide the number by 10 until it becomes zero; zero itself has one digit.
#include <stdio.h>
int main(){int n,count=0;printf("Enter integer: ");scanf("%d",&n);if(n<0)n=-n;if(n==0)count=1;while(n>0){count++;n/=10;}printf("Digit count = %d\n",count);return 0;}
