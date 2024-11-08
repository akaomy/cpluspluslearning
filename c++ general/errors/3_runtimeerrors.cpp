#include <iostream>
#include <string.h>

using namespace std;

void badRecFunc(const int n)
{
    cout << n << endl;
    badRecFunc(n + 1);
};

int main()
{
    // 1. divison by zero
    // cout << "division by zero" << endl;
    // cout << 10 / 0 << endl;
    // output: -1073741676
    // translation: the output negative integer is the hex value 0xC0000094
    // or Integer division by zero exception code on Windows
    // Code: c0000094 Description: EXCEPTION_INT_DIVIDE_BY_ZERO


    // 2. null pointer dereference
    // int* pntr1 = nullptr;
    // cout << *pntr1 << endl;
    // output: Process finished with exit code -1073741819 (0xC0000005)
    // translation: access violation error
    // reason: dereferencing Null or Uninitialized pointers


    // 3. array out of bounds
    // int arr[4] = {1,2,3,4};
    // cout << arr[11] << endl;
    // output: 32759; Process finished with exit code 0
    // reason: c++ doesn't provide bound checking for arrays.
    // program will read from whatever memory is next to the array,
    // which could lead to unpredictable results
    // to prevent: bound check through use of e.g. arr.at(11) > will through error


    // 4. memory leak
    // int* arr = new int[10];
    // cout << arr << endl;
    // output: Process finished with exit code -1073741819 (0xC0000005)
    // translation: Access Violation Error
    // reason: improper use after allocation.
    // attempt to access elements that shouldn't be accessed. at least not in a way that it was accessed.


    // 5. stack overflow
    // e.g. use of infinite recursive function without stopping point
    // const int i = 1;
    // badRecFunc(i);
    // output: 1 2 3 4 ... Process finished with exit code -1073741571 (0xC00000FD)
    // translation: Stack Overflow


    // 6. invalid type casting
    // n/a dk how to create


    // 7. buffer overflow
    // char buffer[5];
    // copy a string that is too long for the buffer
    // strcpy(buffer, "Long string that is too long for the buffer");
    // cout << buffer << endl;
    // output: Long string that is too long for the buffer
    // Process finished with exit code -1073741819(0xC0000005)
    // translation: access violation error

    return 0;
}