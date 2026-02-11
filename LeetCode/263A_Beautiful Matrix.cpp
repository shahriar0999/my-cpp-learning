#include <bits/stdc++.h>
using namespace std;
 
int main() {
    // define a 5*5 matrix
    int matrix[5][5];
    // take input for the matrix
    for (int i = 0; i < 5; i++) {
        cin >> matrix[i][0] >> matrix[i][1] >> matrix[i][2] >> matrix[i][3] >> matrix[i][4];
    }

    // now find the index number of 1
    int row_index, col_index;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (matrix[i][j] == 1) {
                row_index = i;
                col_index = j;
                break;
            }
        }
    }
    // now calculate the number of moves to make the matrix beautiful
    int moves = abs(2 - row_index) + abs(2 - col_index);
    cout << moves << endl;
    return 0;
}
