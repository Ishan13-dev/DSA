// Problem 14: Count Digits in a Number
// Divide the number by 10 until it becomes zero; zero itself has one digit.
#include <iostream>
using namespace std;
int main(){int n,count=0;cout<<"Enter integer: ";cin>>n;if(n<0)n=-n;if(n==0)count=1;while(n>0){count++;n/=10;}cout<<"Digit count = "<<count<<"\n";}
