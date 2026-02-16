#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    for (int i=0; i < t; i++){
        int n; cin >> n;
        vector<int> v;
        for (int j=0; j < n; j++){
            int num; cin >> num;
            v.push_back(num);
        }
       int majority_value;
       if(v[0] == v[1]){
        majority_value  = v[0];
       }
       else{
        majority_value = v[2];
       }

       for (int k=0; k < n; k++){
        if (v[k]  != majority_value){
            cout << k+1 << endl;
        }
       }
    }
    

}