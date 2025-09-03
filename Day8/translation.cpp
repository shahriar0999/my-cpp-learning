#include <bits/stdc++.h>
using namespace std;

int main(){
    string s; cin >> s ;
    string t; cin >> t ;
    
    // int y = 0;
    // int n = 0;

    // for (int i  = 0; i < s.size(); i++){
    //     //int n = i - 8;
    //     if(s[i] == t[t.size() - (i+1)]){
    //         y += 1;
    //     }else {
    //         n += 1;
    //     }
    // }
    // if (y == s.size()){
    //     cout << "YES" << endl;
    // }else{
    //     cout << "NO" << endl;
    // }

reverse(s.begin(), s.end());
if (s == t){
    cout << "YES" << endl;
}else{
    cout << "NO" << endl;
}
    return 0;
}


//  0  1  2  3  4  5  6  7 
// -1 -2 -3 -4 -5 -6 -7 -8