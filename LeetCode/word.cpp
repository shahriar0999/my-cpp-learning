#include <bits/stdc++.h>
using namespace std;

int main(){
    string word; cin >> word;
    string lower = "", upper = "";

    for (char c : word){
        if (islower(c)){
            lower += c;
        }
        else if (isupper(c)){
            upper += c;
        }
    }

    if (lower.size() > upper.size()){
        for (char &c: word){
            c = tolower(c);
        }
    }
    else if (upper.size() > lower.size()){
        for (char &c: word){
            c = toupper(c);
        }
    }
    else{
        for (char &c: word){
            c = tolower(c);
        }
    }

    cout << word << endl;
}