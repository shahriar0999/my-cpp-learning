#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    string s; cin >> s;
    int result = 0;
    for (int i=0; i < n; i++){
        int val = s[i] - '0';
        result += val;
    }
    cout << result << endl;
}