#include <vector>
#include <iostream>
using namespace std;


int main() {
    vector<int> vectorValuesList;
    unsigned int i;

    // append new element with new value
    vectorValuesList.push_back(1);
    vectorValuesList.push_back(2);
    vectorValuesList.push_back(3);
    vectorValuesList.push_back(4);

    for (i = 0; i < vectorValuesList.size(); i++) {
        cout << vectorValuesList.at(i) << endl;
    }

    // returns vector's last value and doesn't change the vector
    cout << "vector's last value: " << vectorValuesList.back() << endl;

    vectorValuesList.pop_back(); // doesn't return value
    // removes vector's last value
    cout << "vector's last value: " << vectorValuesList.back() << endl;

    return 0;
}