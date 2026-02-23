#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    
    for (int i=0; i < t; i++){
        int a, b, c, d; cin >> a >> b >> c >> d;
        
        int result = 0;  // Reset for each test case
        
        if (a < b) result += 1;
        if (a < c) result += 1;
        if (a < d) result += 1;
        
        cout << result << endl;
    }
}