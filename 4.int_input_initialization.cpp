// 4.int_input_initialization.cpp
// author : Pratik Gorade

#include <iostream>
#include <limits>
using namespace std;

int main() {
    // method 1 -> type identifier = initial_value;
    int n1 = 1; // c-like initialization 

    // method 2 -> type identifier (initial_value);
    int n2 (2);  // constructor initialization (cpp specific)

    // method 3 -> type identifier {initial_value};
    int n3 {3}; // uniform initialization (introduced in c++11 standard)

    cout << n1 << n2 << n3 << endl;

    int n4; // uninitialized identifier
    //cout << n4 << endl; // this won't work with -Werrors flag

    n4 = 4;
    cout << n4 << endl;

    return 0;
}