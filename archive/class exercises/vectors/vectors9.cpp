// resizing vectors
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> someUserVals; // size is not known here
    int numVals;
    unsigned int i;

    cout << "Enter number of integers you want to enter: ";
    cin >> numVals;

    someUserVals.resize(numVals);

    cout << "Enter " << numVals << " integer values" << endl;
    for (i = 0; i < someUserVals.size(); i++) {
        cout << "Value: ";
        cin >> someUserVals.at(i);
    }
    cout << "You entered: ";
    for (i = 0; i < someUserVals.size(); ++i) {
        cout << someUserVals.at(i) << " ";
    }
    cout << endl;

    return 0;
}