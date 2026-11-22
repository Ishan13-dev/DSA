// Problem 18: Character Frequency
// Count how often each character appears, including spaces and punctuation; display only nonzero entries.
#include <iostream>
using namespace std;
int main(){string s;int freq[256]={0};cout<<"Enter text: ";getline(cin,s);for(unsigned char ch:s)freq[ch]++;for(int i=0;i<256;i++)if(freq[i]){if(i>=32&&i<=126)cout<<"'"<<(char)i<<"' : "<<freq[i]<<"\n";else cout<<"ASCII "<<i<<" : "<<freq[i]<<"\n";}}
