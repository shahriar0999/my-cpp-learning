#include <bits/stdc++.h>
using namespace std;

struct {
    int x;
    string y;
} MyStruct;

int main() {
    MyStruct.x = 10;
    MyStruct.y = "Hello, World!";
    cout << "x: " << MyStruct.x << ", y: " << MyStruct.y << endl;
    return 0;
}