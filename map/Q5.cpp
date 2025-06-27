// Given a string s, find the index of the first character that repeats (i.e., appears more than once).
// If no character repeats, print -1.
#include <iostream>
#include <map>
#include <string>
using namespace std;
int main(){
   string s = "abcbd";
   map<char,int> freq;
   for(auto c:s){
    freq[c]++;
   }
   char keep='\0';
   for(auto it:freq){
    if(it.second>1){
        keep=it.first;break;
    }
   }
   for(int i=0;i<s.size();i++){
    if(s[i]==keep) {cout<<i;break;}
   }
   return 0;
}