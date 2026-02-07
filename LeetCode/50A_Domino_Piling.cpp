#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, k;
    cin >> n >> k;
 
    int area = n * k;
    int max_dominoes = area/2;
 
    cout << max_dominoes << endl;
    return 0;
}
