#include <iostream>
#include <vector>
using namespace std;

// find max value in a vector

int main() {
    const int NUM_VALS = 5;
    vector<int> userVals(5);
    unsigned int i;
    int maxVal;
    int minVal;
    int countNeg;
    int countPos;
    int sumOfAllvals;

    cout << "Enter " << NUM_VALS << " integer values: " << endl;

    // takes in values intoour vector from user input
    for (i = 0; i < userVals.size(); ++i) {
        cin >> userVals.at(i);
    }    

    maxVal = userVals.at(0); // get out initial max value from the first element in vector
    // iterate over values in the vector 
    // and compare each value with our maxVal
    for (i = 0; i < NUM_VALS; ++i) {
        // if value in a vector more than our maxVal
        // make it our new maxVal
        if (userVals.at(i) > maxVal) {
            maxVal = userVals.at(i);
        }
    }
    cout << "Our max value is: " << maxVal << endl;

    minVal = userVals.at(0);
    for (i = 0; i < NUM_VALS; ++i) {
        if (userVals.at(i) < minVal) {
            minVal = userVals.at(i);
        }
    }
    cout << "Our min value is: " << minVal << endl;

    countPos = 0;
    for (i = 0; i < NUM_VALS; ++i) {
        if (userVals.at(i) > 0) {
            countPos += 1;
        }
    }
    cout << "There is this much positive values entered: " << countPos << endl;

    countNeg = 0;
    for (i = 0; i < NUM_VALS; ++i) {
        if (userVals.at(i) < 0) {
            countNeg += 1;
        }
    }
    cout << "There is this much negative values entered: " << countNeg << endl;

    sumOfAllvals = 0;
    for (i = 0; i < NUM_VALS; ++i) {
        sumOfAllvals += userVals.at(i);
    }
    cout << "The sum of all entered values is " << sumOfAllvals << endl;

    return 0;
}