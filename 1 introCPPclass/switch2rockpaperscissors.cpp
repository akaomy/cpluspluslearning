// Write a switch statement that checks nextChoice. If 0, print "Rock". If 1, print "Paper". If 2, print "Scissors". For any other value, print "Unknown". End with newline. 

#include <iostream>
using namespace std;
// Omitting the break statement for a 
// case will cause the statements within 
// the next case to be executed. Such 
// "falling through" to the next case 
// can be useful when multiple cases, 
// such as cases 0, 1, and 2, should 
// execute the same statements. 


int main () {
    int nextChoice;

    cout << "Enter number from 0 to 3:" << endl;
    cin >> nextChoice;

    switch (nextChoice) {
        case 0:
            cout << "Rock" << endl;
            break;
        case 1:
            cout << "Paper" << endl;
            break;
        case 2:
            cout << "Scissors" << endl;
            break;
        default:
            cout << "Unknown" << endl;
            break;
    };
};