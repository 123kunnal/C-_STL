// Compare two pair<int, int> values:
#include<iostream>
#include<utility>
using namespace std;
int main(){
    pair<int, int> a = {1, 5};
    pair<int, int> b = {1, 7};
    if (a.first>b.first){
        cout<<"a is greater";
    }
    else if(a.first==b.first){
        if(a.second>b.second){
            cout<<"a is greater";
        }
        else if(a.second==b.second){
            cout<<"equal";
        }
        else{
            cout<<"b is greater";
        }
    }
    else{
        cout<<" b is greater";
    }
    return 0;
}
// This does:

// Compare a.first vs b.first

// If equal, then compares a.second vs b.second
// if (a < b)
//     cout << "a is smaller";
// else if (a == b)
//     cout << "equal";
// else
//     cout << "b is smaller";

