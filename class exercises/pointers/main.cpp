#include <iostream>
using namespace std;

int main() {
    int regVar;
    int* pointerOfRegVar = nullptr; // initialize pointer that holds unknown address - NULL or nullptr
   
    cout << "regVar location: " << "" << &regVar << endl;
    cout << "regVar value: " << "" << regVar << endl;
    cout << "initial pointerOfRegVar location: " << "" << &pointerOfRegVar << endl;
   
    pointerOfRegVar = &regVar;
   
    cout << "after assigning to the pointerOfRegVar regVar's location: " << "" << pointerOfRegVar << endl;
    cout << "value of pointerOfRegVar at thi moment: " << "" << *pointerOfRegVar << endl;
   
    *pointerOfRegVar = 10;
   
    cout << "pointerOfRegVar value after assigning it value 10: " << "" << *pointerOfRegVar << endl;
    cout << "RegVar value after assigning to pointerOfRegVar value 10: " << "" << regVar << endl;
    

    return 0;
}