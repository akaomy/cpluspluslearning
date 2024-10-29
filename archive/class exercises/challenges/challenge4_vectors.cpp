#include <iostream>
#include <vector>
using namespace std;

// Integer numIn is read from input. Given the integer vector dailyPrices with the size of numIn, write a for loop to output all the integers in dailyPrices in reverse order. Separate the integers with a comma followed by a space (", ").

int main() {
   int numIn;
   int i;

   cin >> numIn;

   // Creates a vector of size numIn and initializes all values to 0
   vector<int> dailyPrices(numIn);

   for (i = 0; i < dailyPrices.size(); ++i) {
      cin >> dailyPrices.at(i);
   }

   for (i = dailyPrices.size() - 1; i > numIn; --i) {
      cout << dailyPrices.at(i) << ", " << endl;
   }


   return 0;
}