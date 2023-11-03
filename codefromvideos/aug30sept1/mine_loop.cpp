#include <iostream>
#include <vector>
using namespace std;

int main () {
    // practicing loops

    // for loop with user input
    int num;
    int count = 0;

    cout << "Enter your number: " << endl;
    cin >> num;
    while (true) {
        cout << "looping = " << count << endl;
        count ++;
        if (count > num) {
            cout << "exiting the loop..." << endl;
            break;
        }
    }

    // while loop with user input
    int num2;

    cout << "Enter your number2: " << endl;
    cin >> num2;

    for (int count2 = 0; count2 <= num2; count2++) {
        cout << "looping part2 = " << count2 << endl;
    }

}