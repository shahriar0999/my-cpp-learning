#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        // Sort the array
        sort(a.begin(), a.end());
        
        // Check if adjacent differences are ≤ 1
        bool possible = true;
        for (int i = 1; i < n; i++) {
            if (a[i] - a[i-1] > 1) {
                possible = false;
                break;
            }
        }
        
        if (possible) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}