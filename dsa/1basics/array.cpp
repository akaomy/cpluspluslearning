#include <iostream>

using namespace std;

void arr1()
{
    // PART1:
    int arr[] = {1,2,3}; // 4 bytes * 3 elements
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
    cout << "print out each value in the arr[]: " << endl;
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]) ; i++) {
        cout << arr[i] << "\t";
    }

    cout << "" << endl;
    cout << "print out each val in a modified array: " << endl;

    // change a few elements in the array
    arr[0] = 10;
    arr[2] = 30;

    // print out all elements in the array again
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]) ; i++) {
        cout << arr[i] << "\t";
    }
}

void arr2()
{
    // PART2:
    int *ptrAsAnArray = new int[5]{4,5,6,7,8};
    cout << "ptrAsAnArray points to first element's memory address in the array that contains 5 elements: " << ptrAsAnArray << endl;
    cout << "*ptrAsAnArray displays value of this first element: " << *ptrAsAnArray << endl;
    cout << "can get next value of a specific element in the array using pointer *ptrAsAnArray+1: " << *ptrAsAnArray+1 << endl;
    cout << "can get value of a specific element in the ptrAsAnArray ptrAsAnArray[1]: " << ptrAsAnArray[1] << endl;
    cout <<  "can get address of selected element &ptrAsAnArray[1]: " << &ptrAsAnArray[1] << endl;
    cout << " " << endl;
    cout << "print out each element in the ptrAsAnArray though *ptrAsAnArray: " << endl;
    while (*ptrAsAnArray)
    {
        cout << *ptrAsAnArray << "\t";
        cout << ptrAsAnArray<< endl;
        ptrAsAnArray++;
    }

    cout << "since we moved pointer 5 times, we need to move it back: " << ptrAsAnArray << " " << endl;
    ptrAsAnArray = ptrAsAnArray - 5;
    cout << " " << endl;
    cout << "Move pointer ptrAsAnArray back: " << ptrAsAnArray << " " << endl;
    cout << " " << endl;
    cout << "print out each element thorugh [i] in the ptrAsAnArray: " << endl;
    // arr length is hardcoded
    for (int i = 0; i < 5; i++)
    {
        cout << ptrAsAnArray[i] << "\t";
        cout << &ptrAsAnArray[i] << endl;
    }
}

int main() {
    // arr1();
    arr2();
};