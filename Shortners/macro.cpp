#include<iostream>
using namespace std;
#include<vector>
// #define is a text replacement, NOT a normal statement.
// so we dont use ; with it other wise it will also take it in shortening
// long long; x; it will shorte like that
#define ll  long long 
#define v  vector<int> 
#define p  push_back 
#define REP(i,a,b) for (int i = a; i <= b; i++)
int main(){
    ll z=1234567898;
    cout<<z;
    v a;
    REP(i,0,5) a.p(i);
    for (auto x : a) cout << x << " ";

    return 0;
}