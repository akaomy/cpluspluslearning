#include <iostream>
using namespace std;


// temperature converter using console
// todo: add UI



int main () {
    double userInp, result;

    cout << "Enter degree in Celsius that you want to convert: " << endl;
    cin >> userInp;
    result = (userInp * 1.8) + 32;
    cout << "The " << userInp << " in Celsius degrees is " << result << " in Fahrenheit" << endl;

    return 0;
};