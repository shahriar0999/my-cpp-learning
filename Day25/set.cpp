#include <bits/stdc++.h>
using namespace std;

int main() {
    set<string> mySet = {"Apple", "Banana", "Cherry"};

    cout << "Initial set contents:\n";
    for (const auto& item : mySet) {
        cout << item << "\n";
    }

    // Check for existence of elements
    cout << "\nChecking existence of elements:\n";
    cout << "Contains Apple: " << (mySet.count("Apple") ? "Yes" : "No") << "\n";
    cout << "Contains Banana: " << (mySet.count("Banana") ? "Yes" : "No") << "\n";
    cout << " Contains Cherry: " << (mySet.count("Cherry") ? "Yes" : "No") << "\n";

    
}