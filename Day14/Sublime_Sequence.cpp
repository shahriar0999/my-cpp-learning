#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    for (int _ = 0; _ < t; _++){
        int x, n; cin >> x >> n;

        if (n % 2 == 0){
            cout << 0 << endl;
        }
        else{
            cout << x << endl;
        }
    }
}