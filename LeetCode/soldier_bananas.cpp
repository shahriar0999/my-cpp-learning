#include <bits/stdc++.h>
using namespace std;

int main() {
    //3 17 4
    int k, n, w; cin >> k >> n >> w;
    /*3*1 = 3
    3*2 = 6
    3*3 = 9
    3*4 = 12
    total = 30
    brow = 30 - 17 = 3*/
    int amount_needed = 0;
    for (int i = 1; i <= w; i++){
        amount_needed += k * i;
    }
    int borrow = amount_needed - n;
    
    if (borrow >= 1){
        cout << borrow << endl;
    }
    else{
        cout << 0 << endl;
    }
}