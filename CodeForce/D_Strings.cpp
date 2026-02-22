#include <bits/stdc++.h>
using namespace std;

int main(){
    string x; cin >> x;
    string y; cin >> y;
    
    cout << x.size() << " " << y.size() << endl;
    cout << x+y << endl;
    char x_first = x[0];
    x[0] = y[0];
    y[0] = x_first;

    cout << x << " " << y << endl;
}