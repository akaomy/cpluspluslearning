// Read the string variables personName and birthPlace from input, assuming that the person's name and birth place may contain multiple words. The first input line contains the person's name and the second input line contains the birth place.

// Ex: If the input is:

// Ken Roy
// Denver, Colorado

// then the output is:

// Ken Roy is from Denver, Colorado.

#include <iostream>
#include <string>
using namespace std;

int main() {
   string personName;
   string birthPlace;
   getline(cin, personName);
   getline(cin, birthPlace);

   cout << personName << " is from " << birthPlace << "." << endl;

   return 0;
}