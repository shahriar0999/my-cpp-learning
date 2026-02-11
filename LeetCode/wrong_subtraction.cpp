#include <bits/stdc++.h>
using namespace std;


int main(){
    int n, k; cin >> n >> k;
    int result = n;

    for (int i = 0; i < k; i++){
        if (result % 10!= 0) {
            result = result - 1;

        }
        else if (result % 10== 0){
            result = result / 10;

        }
    }

    cout << result << endl;
}