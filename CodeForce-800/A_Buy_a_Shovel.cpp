#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b; cin >> a >> b;
    int x = 1;

    while(true){
        int c = a*x;
        if (c % 10 == 0 || c % 10 == b){
            cout << x << endl;
            break;
        }
        x++;
    }
}