#include <iostream>
#include <vector>
using namespace std;

int main() {
   int numElements;
   int i;

   cin >> numElements;

   // Creates a vector of size numElements and initializes all values to 0
   vector<int> hourlyMiles(numElements);

   for (i = 0; i < hourlyMiles.size(); ++i) {
      cin >> hourlyMiles.at(i);
   }

   int startIndex = numElements / 2;
   for (i = hourlyMiles.size() - 1; i >= startIndex; i--) {
      cout << hourlyMiles.at(i);
      if(i > startIndex) {
         cout << " * ";
      }
   }

   
   
   cout << endl;

   return 0;
}