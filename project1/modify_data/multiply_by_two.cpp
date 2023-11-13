// each input number is multiplied by 2 
// if number if negative multiply it by -1
#include <iostream>
#include <vector>
using namespace std;

// generate input data

// modify data
vector<int> multiply_by_two(vector<int> numbers) {
    int i;

    // read all numbers from user input
    for (i = 0; i < numbers.size(); ++i) {
        cin >> numbers.at(i);
    }

    // multiply each number by 2
    for (i = 0; i < numbers.size(); ++i) {
        cout << numbers.at(i) * 2 << endl;
    }

    return numbers;
}


// output data 

// test output data



int main () {
    int size = 5;
    vector<int> myNumbers(size);
    multiply_by_two(myNumbers);
    
}