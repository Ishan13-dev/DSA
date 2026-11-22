// Problem 13: LCM of Two Numbers
// Use LCM(a,b) = |a*b| / GCD(a,b), with zero handled.
#include <stdio.h>
int main(){int a,b,x,y,g;printf("Enter two integers: ");scanf("%d%d",&a,&b);x=a<0?-a:a;y=b<0?-b:b;int p=x,q=y;while(q!=0){int r=p%q;p=q;q=r;}g=p;if(x==0||y==0)printf("LCM = 0\n");else printf("LCM = %d\n",(x/g)*y);return 0;}
