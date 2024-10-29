// list of items - array
// vector - ordered list of items of a given data type
// { } are braces. < > are angle brackets, or chevrons. 
// If you have studied arrays, then know that a vector was added to C++ as a safer and more powerful form of arrays, discussed elsewhere.
// gcc testCustomHeader.cpp -lstdc++

#include <iostream>
#include <vector>
using namespace std;

int main () {
    int num = 5;
    vector<int> numbers(num);
    vector<int> someOtherNums(4, 10);

    for (int i = 0; i < num; i++) {
        numbers.at(i) = i * 10;
        cout << numbers.at(i) << endl;
    }
    cout << " " << endl;

    for (int j = 1; j < someOtherNums.size(); j++) {
        someOtherNums.at(j) = someOtherNums.at(j) * j;
        cout << someOtherNums.at(j) << endl;
    }
}