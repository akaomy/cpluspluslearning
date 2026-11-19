// Write a while loop to read integers from input until zero is read. For each integer read before zero, add the integer times three to vector vect1.

// Ex: If the input is 8 2 3 4 0, then the output is:

// 24
// 6
// 9
// 12

#include <iostream>
#include <vector>
using namespace std;

int main() {
   vector<int> vect1;
   int value;
   int i;

   while (value != 0) {
      cin >> value;
      value *= 3;
      vect1.push_back(value);
   }
   vect1.pop_back();

   for (i = 0; i < vect1.size(); ++i) {
      cout << vect1.at(i) << endl;
   }

   return 0;
}