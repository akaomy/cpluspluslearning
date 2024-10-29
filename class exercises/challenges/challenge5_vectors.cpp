#include <iostream>
#include <vector>
using namespace std;

// Given the integer vector valElements with two elements and the input integer numNew, resize valElements to add numNew elements to the vector.

// After resizing valElements, the new elements are initialized with the default value 1.

// Ex: If the input is 1, then the output is:

// 5 4 
// 5 4 1

// Note: Assume that numNew is a non-negative integer.

int main() {

    vector<int> valElements(2);
    int numNew, i;

    valElements.at(0) = 3;
    valElements.at(1) = 2;

    cin >> numNew;

    for (i = 0; i < valElements.size(); ++i) {
        cout << valElements.at(i) << " ";
    }
    cout << endl;

    valElements.resize(2 + numNew, 1);

    for (i = 2; i < numNew + valElements.size(); ++i) {
		valElements.at(i) = 1;
	}

    for (i = 0; i < valElements.size(); ++i) {
        cout << valElements.at(i) << " ";

        cout << endl;
   }

}