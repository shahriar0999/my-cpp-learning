#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin >> n;
    
    for (int i = 0; i < n; i++){
        string word;
        cin >> word;
        //cout << word.substr(1, word.size()-2) << endl;
        
        if (word.size() > 10){
            cout << word[0] << word.size()-2 << word[word.length() - 1] << endl;
        } else {
            cout << word << endl;
        }
    }
    
    return 0;
}