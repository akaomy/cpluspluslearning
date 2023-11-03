// to compile: gcc stringcomparison.cpp -lstdc++
// to execute: ./a.out

// strings are compared based on their coded value in ASCII
// case matters in a string comparison
// e.g. 'J' is greater than 'A'
#include <iostream>
using namespace std;

int main () {

    string word = "Apples";

    if (word <= "Oranges") {
        cout << "A is less than O" << endl;
    }
};