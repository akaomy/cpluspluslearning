#include <iostream>
#include <array>
using namespace std;

// generic function that prints out all values in an array 
template<typename T, size_t N>
void printValues(const array<T, N>& arr) {
    cout << "printing out all elements in the myArray: " << endl;
    for (auto element: arr) { // built-in array's way for iteration
        cout << element << " ";
    } 
    cout << endl;

    // difference between myArr[i] and myArr.at(i)
    // later throws exception if an arugmen is not valid    

}

int main () {

    int size = 5;

    // static array
    // deallocates when goes out of function
    int stArr[size];

    // dynamic array
    // is allocated on a heap and stays there until the memory is freed manually
    int* dynArr = new int[size];

    // Random Access:           O(1)
    // Insertion at end:        O(1)
    // Insertion in the middle: O(n)
    // Cache locally:           yes

    array<int, 6> myArr;
    cout << "address of an alocated memory space for arr[0]: " << myArr[0] << endl;

    myArr = {1, 2, 3, 4, 5, 6};
    cout << "assigned {1, 2, 3, 4, 5, 6} to myArray, now value of virst element is: " << myArr[0] << endl;

    printValues(myArr);

    array<string, 4> stringArr = {"one", "two", "three", "four"};
    printValues(stringArr);

    return 0;
}