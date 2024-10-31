#include <iostream>

using namespace std;


int main()
{
    // 1. syntax errors
    // missing semicolon
    // cout << "Hello World!" << endl
    // output: error: expected ';' before 'return'

    // 2. type errors
    // int a = 4;
    // string b = "hello";
    // a = b;
    // outpu: error: cannot convert 'std::string' {aka 'std::__cxx11::basic_string<char>'} to 'int' in assignment

    // 3. undeclared identifiers
    // cout << hello << endl;
    // output: error: 'hello' was not declared in this scope;

    // 4. array size errors
    // int arr[-10];
    // output:
    // error:
    // 1) narrowing conversion of '-10' from 'int' to 'long long unsigned int' [-Wnarrowing]
    // 2) size '-10' of array 'arr' is negative

    return 0;
}