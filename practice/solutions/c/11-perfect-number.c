// Problem 11: Perfect Number
// A perfect number equals the sum of its positive divisors excluding itself.
#include <stdio.h>
int main(){int n,sum=0;printf("Enter number: ");scanf("%d",&n);if(n>1){for(int d=1;d<=n/2;d++)if(n%d==0)sum+=d;}printf("%s\n",n>1&&sum==n?"Perfect number":"Not a perfect number");return 0;}
