// Input: s = "leetcode"
// Output: 0
// Explanation: 'l' is the first non-repeating character.
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
    for (int i = 0; i < s.size(); i++) {
        if (freq[s[i]] == 1) {
            cout << "First non-repeating character is '" << s[i] << "' at index " << i << endl;
            return 0;
        }
    }

    // If no unique character
    cout << -1 << endl;
    return 0;
}
