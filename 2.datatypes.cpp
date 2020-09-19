// 2.datatypes.cpp
// Author : Pratik Gorade

#include <iostream>
#include <limits>
using namespace std;

int main() {
    int n;
    string s;
    float f;
    char c;

    cout << "Enter any integer : ";
    while (!(cin >> n))
    {
        cout << "Bad Value. Try Again : ";
        cin.clear();                                         // clears the error flag on cin so that future I/O will not be affected
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // clears the input buffer till newline to avoid parsing errors
        // cin.ignore(arg1, arg2), arg 1 -> characters to skip (can give integer), arg2 -> delimeter after which cin stops ignoring
        // numeric_limits<streamsize>::max() -> it skips the upper limit of the size of the stream
    }
    cout << "You entered the number : " << n << endl;

    cout << "Enter any string : ";
    while (!(cin >> s))
    {
        cout << "Bad Value. Try Again : ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    cout << "You Entered the string : " << s << endl;

    cout << "Enter any float value : ";
    while (!(cin >> f))
    {
        cout << "Bad Value. Try Again : ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    cout << "You Entered the float : " << f << endl;

    cout << "Enter any character : ";
    while (!(cin >> c))
    {
        cout << "Bad Value. Try AGain : ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    cout << "You Entered the character : " << c << endl;

    return 0;
}