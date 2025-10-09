#include <bits/stdc++.h>
using namespace std;

// create a function to add two numbers
void add(int a, int b){
    cout << "The sum is: " << a + b << endl;
}


// parameter and argument
void greet(string name){  // name is parameter
    cout << "Hello, " << name << endl;
}


int main(){
    int a = 10, b = 20;
    add(a, b);

    // call the greet function
    greet("Alice"); // Here "Alice" is argument
    return 0;
}
