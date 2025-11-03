#include <bits/stdc++.h>
using namespace std;

int main() {
    cout << "Initial map contents:\n";
    map<string, int> myMap = {
        {"Apple", 1},
        {"Banana", 2},
        {"Cherry", 3}
    };

    // display all key-value pairs in the map
    cout << myMap["Apple"] << "\n";
    cout << myMap["Banana"] << "\n";
    cout << myMap["Cherry"] << "\n";

    return 0;
    
}