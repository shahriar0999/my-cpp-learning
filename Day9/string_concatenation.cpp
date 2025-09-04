#include <bits/stdc++.h>
using namespace std;

int main(){
    string first_name = "Shahriar " ;
    string last_name = "Kabir" ;
    string full_name = first_name +  " " + last_name;   // add space
    cout << full_name << endl;


    // using append
    string fullName = first_name.append(last_name);
    cout << fullName << endl;
    return 0;
}