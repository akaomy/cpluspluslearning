#include <iostream>
#include "func2.h"

using namespace std;

void func(); // will fail because no definition of the funciton
// void func2()
// {
//     cout<<"Hello world!"<<endl;
// };

int main()
{
  func();
    // Undefined Reference: Function declared but not defined.
    // func();
    // output: undefined reference to `func()'
    // translation: function declared but not defined

    // Multiple Definitions: Same function defined in multiple places.
    // int func2();
    // output: doesn't work for me for some reason.
    // todo: to investigate why can't I call another function from different.cpp

    // Mismatched Signatures: Declaration and definition don’t match.

    // Static Variable Definitions: Static members declared but not defined.

    // 3.

    return 0;
}