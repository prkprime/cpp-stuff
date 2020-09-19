// 5.int_type_deduction.cpp
// author : Pratik Gorade

#include <iostream>
#include <limits>
using namespace std;

int main() {
    int a {50};

    auto b = a; // declares b as same type as a and gives same value
                // more like int b = a;

    decltype(a) c; // type of identifier (a) passed to decltype function is assigned to newly created identifier (c)
                    // it only gives type of a to c and not the value so c needs to be initialized before using
    c = 75;
    cout << "a : " << a << endl
    << "b : " << b << endl
    << "c : " << c << endl;
    return 0;
}