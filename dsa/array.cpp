#include <iostream>

using namespace std;

int main() {
    int arr[] = {1,2,3,4,5,6,7};

    // sizeof() - total size in bytes
    cout << "size in bits of the array is " << sizeof(arr) << endl;
    cout << "size in bits of the first element in the array is " << sizeof(arr[0]) << endl;
    cout << "the total size of the array " << sizeof(arr) / sizeof(arr[0]) << endl;
    cout << "" << endl;

    // so, print out all elements in the array
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]) ; i++) {
        cout << arr[i] << endl;
    }

    cout << "" << endl;
    cout << "new array: " << endl;

    // change a few elements in the array
    arr[0] = 10;
    arr[4] = 20;

    // print out all elements in the array again
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]) ; i++) {
        cout << arr[i] << endl;
    }

};