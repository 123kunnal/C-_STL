//Given a string s, print all the characters that appear more than once, along with their frequencies.
#include <iostream>
#include <map>
#include <string>
using namespace std;
int main(){
   string s = "programming";
   map<char,int> times;
   for(char c:s){
    times[c]++;
   }
   for(auto it:times){
    if(it.second>1){
        cout<<it.first<<" "<<it.second<<endl;
    }
   }
   return 0;

}