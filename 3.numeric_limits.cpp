// 3.numeric_limits.cpp
//author : Pratik Gorade

#include <iostream>
#include <limits>
using namespace std;

int main() {
    cout << "c++ norm : " << __cplusplus << endl; // __cplusplus prints the value of cpp norm that compiler is using
    cout << "Min Limit and max limit of int type : " << numeric_limits<int>::min() << " - " << numeric_limits<int>::max() << endl;
    cout << "Min Limit and max limit of unsigned int type : " << numeric_limits<unsigned int>::min() << " - " << numeric_limits<unsigned int>::max() << endl;
    return 0;
}