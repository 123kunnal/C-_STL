#include<iostream>
using namespace std;

pair<int, int> findMinMax(int a, int b) {
    if (a < b)
        return {a, b};
    else
        return {b, a};
}

int main() {
    pair<int, int> result = findMinMax(3, 7);
    cout << "Min: " << result.first << ", Max: " << result.second << endl;

    return 0;
}
