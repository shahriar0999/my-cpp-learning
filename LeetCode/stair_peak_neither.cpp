#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    for (int i=0; i < t; i++){
        int a, b, c; cin >> a >> b >> c;

        //A stair satisfies the condition a<b<c. A peak satisfies the condition a<b>c

        if ((a<b && b<c)){
            cout << "STAIR" << endl;
        }
        else if ((a < b && b > c)){
            cout << "PEAK" << endl;
        }
        else{
            cout << "NONE" << endl;
        }

   }
    
}