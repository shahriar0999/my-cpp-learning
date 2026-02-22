#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int pos;
    char op;

    if((pos = s.find('+')) != string::npos) op = '+';
    else if((pos = s.find('-')) != string::npos) op = '-';
    else if((pos = s.find('*')) != string::npos) op = '*';
    else if((pos = s.find('/')) != string::npos) op = '/';

    int a = stoi(s.substr(0, pos));
    int b = stoi(s.substr(pos + 1));

    if(op == '+') cout << a + b;
    else if(op == '-') cout << a - b;
    else if(op == '*') cout << a * b;
    else if(op == '/') cout << a / b;
}