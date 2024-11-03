#include <iostream>

using namespace std;

int main() {
    int arr[] = {1,2,3}; // 4 bytes * 3 elements
    const int *ptrAsAnArray = new int[5]{4,5,6,7,8};
    cout << "ptrAsAnArray points to first element in the array that contains 5 elements: " << ptrAsAnArray << endl;
    // to access the next element in the array
    cout << "*ptrAsAnArray displays value of this first element: " << *ptrAsAnArray << endl;
    cout << "See next value in this array: " << *ptrAsAnArray+1 << endl;
    cout << "All values in this array: " << *ptrAsAnArray+1 << " " << *ptrAsAnArray+2 << " "
    << *ptrAsAnArray+3 << " " << *ptrAsAnArray+4 << " " << endl;

    // sizeof() - total size in bytes
    // cout << "size in bytes of the array is " << sizeof(arr) << endl;
    // cout << "size in bytes of the first element in the array is " << sizeof(arr[0]) << endl;
    // cout << "the total size of the array " << sizeof(arr) / sizeof(arr[0]) << endl;
    // cout << "" << endl;
    // size in bits meaning:
    // amount of memory an array occupies measured in bits
    // each element has its own size, 4 bytes for int, 1 byte for char
    // total size in bytes = number of elements * size of each element in bytes
    // convert bytes in bits: 1 byte = 8 bits, so total size in bytes * 8

    // so, print out all elements in the array
    // sizeof(arr) - total size of the array
    // sizeof(arr[0]) - size of one elements
    // sizeof(arr) / sizeof(arr[0]) - gives us the total number of elements in the array
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]) ; i++) {
        // cout << arr[i] << endl;
    }

    // cout << "" << endl;
    // cout << "new array: " << endl;

    // change a few elements in the array
    arr[0] = 10;
    arr[4] = 20;

    // print out all elements in the array again
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]) ; i++) {
        // cout << arr[i] << endl;
    }

};