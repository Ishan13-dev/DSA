// Problem 11: Perfect Number
// A perfect number equals the sum of its positive divisors excluding itself.
#include <iostream>
using namespace std;
int main(){int n,sum=0;cout<<"Enter number: ";cin>>n;if(n>1)for(int d=1;d<=n/2;d++)if(n%d==0)sum+=d;cout<<(n>1&&sum==n?"Perfect number":"Not a perfect number")<<"\n";}
