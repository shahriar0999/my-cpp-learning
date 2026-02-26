#include <bits/stdc++.h>
using namespace std;


int main(){
    int t; cin >> t;
    for (int i=0; i<t; i++){
        int n; cin >> n;
        string a; cin >> a;
        int left = 0;
        int right=a.size()-1;
        while (left < right && a[left] != a[right]){
            left += 1;
            right -= 1;
        }

        cout << ((right - left) + 1) << endl;
    }
}
        
