// Print the two strings, firstString and secondString, in alphabetical order. Assume the strings are lowercase. End with newline. Sample output:

#include <iostream>
#include <string>
using namespace std;

int main() {
   string firstString;
   string secondString;

   cin >> firstString;
   cin >> secondString;

   if (firstString < secondString) {
      cout << firstString << " " << secondString << endl;
   } else {
      cout << secondString << " " << firstString << endl;
   }
   
   return 0;
}