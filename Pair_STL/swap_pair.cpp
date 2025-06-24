// 🔁 Swap the values of two pairs:
#include<iostream>
#include<utility>
using namespace std;

int main() {
    pair<int, int> a = {1, 2};
    pair<int, int> b = {3, 4};

    // Manual swap using a temp pair
    pair<int, int> temp = a;
    a = b;
    b = temp;

    cout << "a: " << a.first << " " << a.second << endl;
    cout << "b: " << b.first << " " << b.second << endl;

    return 0;
}
