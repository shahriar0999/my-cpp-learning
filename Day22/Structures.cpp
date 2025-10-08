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

// one structure with multiple variables
struct Point {
    int x;
    int y;
} p1, p2;

// one structure with initialization
struct Rectangle {
    int length = 10;
    int breadth = 5;
} rect1, rect2;

