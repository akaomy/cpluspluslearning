#include <iostream>
#include <string>     // Supports use of "string" data type
using namespace std;

/* exercises
 * to compile: gcc strings.cpp -lstdc++ 
 */

int main() {
   // string test;
   string myLine;

   // cout << "Enter a word" << endl;
   // cin >> test;

   cout << "Print the whole line that you want to get into your variable" << endl;
   getline(cin, myLine);

   // cout << "Your word is " << test << endl;   
   cout << "Here is your line: " << endl;
   cout << myLine << " \nend of your line" << endl;

   return 0;
}
