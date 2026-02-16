#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    for (int i = 0; i < t; i++){
        vector<int> v;
        for (int i = 0; i  < 3; i++){
            int a; cin >> a;
            v.push_back(a);
        }
        sort(v.begin(), v.end());

        if (v[0] == v[1]){
            cout << v[2] << endl;
        }
        else{
            cout << v[0] << endl;
        }
    }
}