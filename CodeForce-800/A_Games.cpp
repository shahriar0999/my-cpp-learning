#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> home(n), guest(n);
    
    for (int i = 0; i < n; i++) {
        cin >> home[i] >> guest[i];
    }
    
    int count = 0;
    
    // Check each possible host-guest pair
    for (int i = 0; i < n; i++) {        // i is host
        for (int j = 0; j < n; j++) {    // j is guest
            if (i != j) {                 // Different teams
                if (home[i] == guest[j]) {
                    count++;
                }
            }
        }
    }
    
    cout << count << endl;
    
    return 0;
}