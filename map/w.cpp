//s = "this is a test this is only a test"
/*a: 2  
is: 2  
only: 1  
test: 2  
this: 2
*/ 
#include <iostream>
#include <map>
#include <string>
#include<sstream>
using namespace std;
int main(){
    string s = "this is a test this is only a test";
    stringstream ss(s);//It lets you treat a string like a stream — so you can extract words, numbers, or tokens as if reading from cin.


    map<string,int> stream;string word;
    while(ss >> word){//extracts each word till end
        stream[word]++;
    }
    for(auto it:stream){
        cout<< it.first<<" "<<it.second<<endl;
    }
    return 0;
}