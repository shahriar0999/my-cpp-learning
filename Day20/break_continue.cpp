#include <bits/stdc++.h>
using namespace std;

int main() {
    for (int i = 0; i < 10; i++){
        if (i == 5){
            break; // exit the loop when i is 5
        }
        cout << i << " ";
    }

    for (int i = 0; i < 10; i++){
        if (i == 5){
            continue; // skip the 5 only when i is 5 and continue the loop
        }
        cout << i << " ";
    }
}

