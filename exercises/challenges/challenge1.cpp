// String variables studentName and courseName are read from input. Use variables studentName, courseName, and action to output the following. End with a newline.

// Ex: If the input is Guy Genetics, then the output is:

// Guy likes Genetics.



#include <iostream>
#include <string>
using namespace std;

int main() {
   string studentName;
   string courseName;
	string action = "likes";

   cin >> studentName;
   cin >> courseName;

   cout << studentName << " " << action << " " << courseName << ".\n";

   return 0;
}