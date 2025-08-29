// Search an element in an array Practice Problem in Arrays
#include <bits/stdc++.h>
using namespace std;

int main() {
  // your code goes here
    int N, X;
    cin >> N >> X;
    bool flag = false;
    
    int arr[N];
    
    for (int i=0; i < N; i++){
        cin >> arr[i];
        
        
    }
    for (int i = 0 ; i<N ; i++){
        if (arr[i] == X){
            flag = true;
            break;
        }
    }
    
    if (flag){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    return 0;
}