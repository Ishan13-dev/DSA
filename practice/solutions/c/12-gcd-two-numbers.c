// Problem 12: GCD of Two Numbers
// Euclid's algorithm: repeatedly replace (a,b) with (b,a%b).
#include <stdio.h>
int main(){int a,b;printf("Enter two integers: ");scanf("%d%d",&a,&b);if(a<0)a=-a;if(b<0)b=-b;while(b!=0){int r=a%b;a=b;b=r;}printf("GCD = %d\n",a);return 0;}
