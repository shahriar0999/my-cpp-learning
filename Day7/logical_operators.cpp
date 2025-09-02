#include <bits/stdc++.h>
using namespace std;

int main(){
    int x; cin >> x;
    cout << (x < 10 && x > 5) << endl;
    cout << (x >= 5 || x > 10) << endl;
    cout << !(x < 5 && x < 10) << endl;
    return 0;
}