#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        if (s.size() > 10){
            int l = s.size() - 2;
            cout << s[0] << to_string(l) << s[s.size()-1] << endl;
        }
        else{
            cout << s << endl;
        }
    }
}