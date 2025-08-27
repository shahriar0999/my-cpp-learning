#include<bits/stdc++.h>
using namespace std;


int main()
{   
    int n; 
    cin >> n ;
    
    int Petya, Vasya, Tonya ;
    int output=0;
    
    for (int i=0; i < n; i++){
        cin >> Petya >> Vasya >> Tonya;
        
        if (Petya + Vasya + Tonya >= 2){
            output += 1;
        }
    }
    
    cout << output << endl;
    return 0;
}