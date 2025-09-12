//https://codeforces.com/problemset/problem/1619/A
#include <bits/stdc++.h>
using namespace std;


int main(){
    int t; cin >> t;
    for (int i = 0; i < t; i++){
        string str; cin >> str;

        if (str.size() == 2){
            if (str.substr(0, 1) == str.substr(1, 1)){
                cout << "YES" << endl;
            }else{
                cout << "NO" << endl;
            }
        }
        else if (str.size() == 4){
            if (str.substr(0, 2) == str.substr(2, 2)){
                cout << "YES" << endl;
            }else{
                cout << "NO" << endl;
            }
        }
        else if (str.size() == 6){
            if (str.substr(0, 3) == str.substr(3, 3)){
                cout << "YES" << endl;
            }else{
                cout << "NO" << endl;
            }
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}