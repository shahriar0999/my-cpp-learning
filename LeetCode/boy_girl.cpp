#include <bits/stdc++.h>
using namespace std;

int main() {
    string a;
    cin >> a;

    set<string> distinct_characters;
    for (int i = 0; i < a.size(); i++) {
        distinct_characters.insert(string(1, a[i]));
    }

    if (distinct_characters.size() % 2 == 0) {
        cout << "CHAT WITH HER!" << endl;
    }
    else {
        cout << "IGNORE HIM!" << endl;
    }
}