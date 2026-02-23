#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while (t--){
        int a, b; cin >> a >> b;
        int difference = abs(a - b);
        
        // Convert to double for proper division
        int result = ceil(difference / 10.0);  // Use 10.0 for double division
        
        cout << result << endl;
    }
    return 0;
}