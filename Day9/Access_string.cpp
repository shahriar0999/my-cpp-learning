#include <bits/stdc++.h>
using namespace std;

int main(){
    string myString = "Hello";
    cout << myString[0] << endl; // Output H
    cout << myString[1] << endl; // Output e

    cout << endl;
    // last character
    cout << myString[myString.length() - (0 + 1)];   // i = 0
    cout << myString[myString.length() - (1 + 1)];   // i = 1
    cout << myString[myString.length() - (2 + 1)];   // i = 2
    cout << myString[myString.length() - (3 + 1)];   // i = 3
    cout << myString[myString.length() - (4 + 1)];   // i = 4

    return 0;
}