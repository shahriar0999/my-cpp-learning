#include <bits/stdc++.h>
using namespace std;

// function to print elements of an array
void displayArray(int arr[5]){
    for(int i = 0; i < 5; i++){
        cout << arr[i] << endl;
    }
}

int main(){
    int myNumber[5] = {10, 20, 30, 40, 50};
    displayArray(myNumber);
    return 0;
}