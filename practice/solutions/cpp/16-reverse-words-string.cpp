// Problem 16: Reverse Words in a String
// Reverse word order while keeping each word's letters unchanged.
#include <iostream>
#include <sstream>
#include <vector>
using namespace std;
int main(){string s,word;cout<<"Enter a sentence: ";getline(cin,s);stringstream ss(s);vector<string> words;while(ss>>word)words.push_back(word);for(int i=(int)words.size()-1;i>=0;i--)cout<<words[i]<<(i?" ":"");cout<<"\n";}
