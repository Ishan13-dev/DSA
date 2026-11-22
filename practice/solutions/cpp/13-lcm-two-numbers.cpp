// Problem 13: LCM of Two Numbers
// Use LCM(a,b) = |a*b| / GCD(a,b), with zero handled.
#include <iostream>
using namespace std;
int main(){int a,b;cout<<"Enter two integers: ";cin>>a>>b;int x=a<0?-a:a,y=b<0?-b:b,p=x,q=y;while(q!=0){int r=p%q;p=q;q=r;}if(x==0||y==0)cout<<"LCM = 0\n";else cout<<"LCM = "<<(x/p)*y<<"\n";}
