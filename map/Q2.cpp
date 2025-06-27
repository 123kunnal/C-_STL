//Given a string s, print the frequency of each character in the string in sorted order of characters.


#include <iostream>
#include <map>
using namespace std;

int main() {
    string s = "leetcode";
    map<char, int> freq;

    // Count frequency of each character
    for (char c : s) {
        freq[c]++;
    }

    // Find first non-repeating character
    for(auto it:freq){
        cout<<it.first<<" "<<it.second<<endl;
    }

    
    return 0;
}
