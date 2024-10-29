#include <iostream>
#include <vector>
using namespace std;

// Write a while loop to read integers from input until -1 is read. For each integer read before -1, add the integer times four to vector numberVector.

// Ex: If the input is 4 1 7 9 -1, then the output is:

// 16
// 4
// 28
// 36


int main () {

    vector<int> numberVector;
    int value = 0;
    int i;

    // take input from user and store it in value
    // multiply value by 4
    // add it to the end of the vector
    // repeat untill see -1
    while (value != -1) {
        // cout << "Enter your value here: ";
        cin >> value;
        if (value != -1) {
            numberVector.push_back(value*4);
        }
    }
    


    for (i = 0; i < numberVector.size(); ++i) {
        // cout << "Printing out the vector's values: " << endl;
        cout << numberVector.at(i) << endl;
    }


    return 0;
}
