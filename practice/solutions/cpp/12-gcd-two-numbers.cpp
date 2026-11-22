// Problem 12: GCD of Two Numbers
// Euclid's algorithm: repeatedly replace (a,b) with (b,a%b).
#include <iostream>
using namespace std;
int main(){int a,b;cout<<"Enter two integers: ";cin>>a>>b;if(a<0)a=-a;if(b<0)b=-b;while(b!=0){int r=a%b;a=b;b=r;}cout<<"GCD = "<<a<<"\n";}
