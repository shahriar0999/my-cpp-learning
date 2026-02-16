#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int k;
        cin >> k;

        int count = 0;
        int number = 1;

        while (true) {
            // Check if number is valid
            if (number % 3 != 0 && number % 10 != 3) {
                count++;
            }

            // If this is the k-th valid number, print it
            if (count == k) {
                cout << number << endl;
                break;
            }

            number++;
        }
    }

    return 0;
}
