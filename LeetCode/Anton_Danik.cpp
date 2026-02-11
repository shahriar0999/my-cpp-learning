#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    string r; cin >> r;

    int count_a=0;
    int count_d = 0;

    for (char c: r){
        if (c == 'A'){
            count_a += 1;
        }
        else{
            count_d += 1;
        }
    }

    if (count_a > count_d){
        cout << "Anton" << endl;
    }
    else if (count_d > count_a){
        cout << "Danik" << endl;
    }
    else{
        cout << "Friendship" << endl;
    }
}