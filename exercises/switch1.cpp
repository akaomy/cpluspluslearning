#include <iostream>
using namespace std;
// The switch statement's expression 
// should be an integer or char. The 
// expression should not be a string 
// or a floating-point type. Each case
// have a constant expression like 2 or 
// 'q'; a case expression cannot be a variable.


int main () {
    int numItems, userVal = 30;
    cout << "Enter a number (1 - 4):" << endl;
    cin >> numItems;

    switch (numItems) {
        case 1:
            numItems = 5;
            cout << "Your lucky nummber is: " << numItems << endl;
            break;
        case 3:
            numItems = 12;
            cout << "Your lucky nummber is: " << numItems << endl;
            break;
        case 4:
            numItems = 99;
            cout << "Your lucky nummber is: " << numItems << endl;
            break;
            
        default:
            numItems = 55;
            cout << "Your lucky nummber is: " << numItems << endl;
            break;
    }
}