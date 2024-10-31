#include <iostream>

using namespace std;

int main() {
  // wrong condition in if statement
  int a = 5;
  if (a > 10) // should check for < 10, condition is always false
  {
    cout << "Number is greater than 10." << endl;
  } else {
    cout << "Number is less than or equal to 10." << endl;
  }

  // incorrect loop logic
  int count = 10;
  while (count < 0) // incorrect loop logic, condition is always false
  {
    cout << "Number is less than or equal to 10." << endl;
  }
  return 1; // only return 1 if number is negative

  return 0;
};