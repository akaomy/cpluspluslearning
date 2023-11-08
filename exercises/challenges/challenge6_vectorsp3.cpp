#include <iostream>
#include <vector>
using namespace std;


// Integers are read from input and stored into a vector until 0 is read. Output the odd elements in the vector in reverse order. End each number with a newline.

// Ex: If the input is -1 8 -6 11 0, then the output is:

// 11
// -1

// Note: (x % 2 != 0) returns true if x is odd.

int main() {
    vector<int> dataVector;
    int value;
    int i;

    cin >> value;
    while (value != 0) {
        dataVector.push_back(value);
        cin >> value;
    }

    // odd elements in reverse order
    for (i = dataVector.size() -1; i >= 0; --i) {
        if (dataVector.at(i) % 2 != 0) {
            cout << dataVector.at(i) << endl;
        }
    }

    return 0;
}