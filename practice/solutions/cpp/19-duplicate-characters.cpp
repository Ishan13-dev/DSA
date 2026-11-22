// Problem 19: Find Duplicate Characters
// Print each repeated character once, with its count; whitespace is ignored.
#include <iostream>
using namespace std;
int main(){string s;int freq[256]={0},shown[256]={0};cout<<"Enter text: ";getline(cin,s);for(unsigned char ch:s)if(ch!=' ')freq[ch]++;bool found=false;for(unsigned char ch:s)if(ch!=' '&&freq[ch]>1&&!shown[ch]){cout<<ch<<" appears "<<freq[ch]<<" times\n";shown[ch]=1;found=true;}if(!found)cout<<"No duplicate characters\n";}
