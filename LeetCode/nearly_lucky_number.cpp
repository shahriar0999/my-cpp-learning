#include <bits/stdc++.h>
using namespace std;

int main(){
    string numbers; cin >> numbers;
    int count_7=0;
    int count_4=0;

    for (char c: numbers){
        if (c == '7'){
            count_7 += 1;
        }
        else if (c=='4'){
            count_4 += 1;
        }
    }
    if ((count_7+count_4) == 4 || (count_7+count_4) == 7){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
}