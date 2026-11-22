// Problem 15: Sum of Digits
// Extract digits using remainder by 10 and add them; ignore sign.
#include <iostream>
using namespace std;
int main(){int n,sum=0;cout<<"Enter integer: ";cin>>n;if(n<0)n=-n;while(n>0){sum+=n%10;n/=10;}cout<<"Digit sum = "<<sum<<"\n";}
