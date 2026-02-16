#include <bits/stdc++.h>
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;

    for (int i = 0; i < a.size(); i++){
        a[i] = tolower(a[i]);
        b[i] = tolower(b[i]);
    }

    if (a < b) {
        cout << -1 << endl;
    }
    else if (a > b) {
        cout << 1 << endl;
    }
    else {
        cout << 0 << endl;
    }

    return 0;
}