// Problem 20: Remove Duplicate Characters
// Keep only the first occurrence of each character, preserving order; spaces are preserved too.
#include <iostream>
using namespace std;
int main(){string s,out;bool seen[256]={false};cout<<"Enter text: ";getline(cin,s);for(unsigned char ch:s)if(!seen[ch]){seen[ch]=true;out+=(char)ch;}cout<<"Without duplicates: "<<out<<"\n";}
