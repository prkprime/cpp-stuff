// 8.preprocessor_definations.cpp
// author : Pratik Gorade

#include <iostream>
#include <limits>
using namespace std;

#define pi 3.14159 // here i have used preprocessor defination instead of const
                    // syntax -> #define identifier replacement
#define newline '\n'

int main() {
    double radius;
    cout << "Enter the radius of circle : ";
    while ( !(cin >> radius)) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Bad Value. Try Again : ";
        cin >> radius;
    }
    cout << "Area of the circle is : " << pi*radius*radius << newline;
    return 0;
}