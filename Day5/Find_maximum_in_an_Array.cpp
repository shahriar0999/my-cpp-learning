// Find maximum in an Array Practice Problem in Arrays
#include <bits/stdc++.h>
using namespace std;

int main() {
  // your code goes here
    int T;
    cin >> T;
    
    for (int i = 0; i < T; i++){
        int N ; cin >> N;
        
        int arr[N];
        
        for (int j = 0; j < N; j++){
            cin >> arr[j];
        }
        int max = 0;
        for (int a = 0; a < N; a++){
            if (arr[a] > max){
                max = arr[a];
            }
        }
        
        cout << max << endl;
    }
    return 0;
}