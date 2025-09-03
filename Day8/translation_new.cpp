#include <bits/stdc++.h>
using namespace std;

int main(){
    string s; cin >> s ;
    string t; cin >> t ;
    
    string S;
    for (int i=0; i < s.size(); i++){
        S += s[s.size() - (i+1)];
    }
    if (S == t){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
        return 0;
}
