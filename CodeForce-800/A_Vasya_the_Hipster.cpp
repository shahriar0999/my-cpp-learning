#include <bits/stdc++.h>
using namespace std;

int main(){
    int r, b; cin >> r >> b ;
    int min_day = min(r, b);
    int max_day = max(r, b);
    int same_color = (max_day - min_day)/2;
    cout << min_day << " " << same_color << endl;
}