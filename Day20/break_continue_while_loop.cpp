#include <bits/stdc++.h>
using namespace std;

int main() {
    int i = 0;
    while (i < 10){
        cout << i << " ";
        i++;
        if (i == 5){
            break; // exit the loop when i is 5
        }
    }

    int j = 0;
    while (j < 10){
        cout << j << " ";
        j++;

        if (j == 5){
            continue;   // skip the 5 only when j is 5 and continue the loop and print the next number
        }
        }
}
