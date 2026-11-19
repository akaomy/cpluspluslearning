// Integers numEmployees, firstEmployee, middleEmployee, and lastEmployee are read from input. First, declare a vector of integers named bikingRoster with a size of numEmployees. Then, initialize the first, middle, and last element in bikingRoster to firstEmployee, middleEmployee, and lastEmployee, respectively.

// Ex: If the input is 8 173 99 50, then the output is:

// 173 0 0 0 99 0 0 50

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int numEmployees;
    int firstEmployee;
    int middleEmployee;
    int lastEmployee;
    unsigned int i;

    cin >> numEmployees;
    cin >> firstEmployee;
    cin >> middleEmployee;
    cin >> lastEmployee;

    vector<int> bikingRoster(numEmployees, 0);
    if (numEmployees > 0) {
        bikingRoster[0] = firstEmployee;
    }

    if (numEmployees > 1) {
        bikingRoster[numEmployees / 2] = middleEmployee;
    }

    if (numEmployees > 2) {
        bikingRoster[numEmployees - 1] = lastEmployee;
    }

    for (i = 0; i < bikingRoster.size(); ++i) {
        cout << bikingRoster.at(i) << " ";
    }
    cout << endl;

    return 0;
}