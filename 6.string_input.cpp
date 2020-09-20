// 6.string_input.cpp
// author : Pratik Gorade

#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1 = "Hello World";
    cout << "s1 : " << s1 << endl;

    string s2;
    cout << "Enter a string : ";
    cin >> s2;
    cin.ignore(1000000, '\n'); //idk ehy, but without this, s3 input doesn't work
    cout << "s2 : " << s2 << endl; // this shows that cin only takes input upto 1st whitespace
                                   // to take whitespaces as input, i will need getlines function

    string s3;
    cout << "Enter a string : ";
    getline(std::cin, s3);  // getline is part of <string>
    cout << "s3 : " << s3 << endl;
    return 0;
}