#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    string s = "mississippi";
    map<char, int> freq;

    // Count frequencies
    for (char c : s) {
        freq[c]++;
    }

    char mostFreqChar = '\0';
    int highest = 0;

    for (auto it : freq) {
        if (it.second > highest) {
            highest = it.second;
            mostFreqChar = it.first;
        }
    }

    cout << mostFreqChar << ": " << highest << endl;
    return 0;
}
