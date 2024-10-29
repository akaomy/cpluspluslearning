#include <iostream>
#include <vector>
using namespace std;

// Integers are read from input and stored into a vector until -1 is read. Output the elements from index n to the last index of the vector, where n is specified by the vector's last element. End each number with a newline.

// Ex: If the input is 9 19 7 1 -1, the vector's last element is 1. Thus, the output is:

// 19
// 7
// 1

// Note: The input has at least three integers, and the vector's last element is always less than the vector's size.

int main() {
    // get user's input 
    // store user input in a vector
    // do this until -1 is read

    // get the previous before -1 number and store it as n
    // output stored in vector elements untill n

    vector<int> dataVect;
    int value;
    int i;
    int n;

    cin >> value;
    while (value != -1) {
        dataVect.push_back(value);
        cin >> value;
    }

    // get value of a last element in a vector before -1 
    // our start index for iteration
    n = dataVect.at(dataVect.size()-1);
    for (i = n; i < dataVect.size(); ++i) {
        cout << dataVect.at(i) << endl;
    }

    return 0;
}