// numTime is read from input as the number of input values in the vector that follow. Use two for loops to output all numTime elements of vector walkingNumbers that are:

//     at even indices
//     at odd indices

// For both loops, follow each element with a "*", including the last element, and end with a newline.

// Ex: If the input is 8 135 4 57 25 174 146 26 116, then the output is:

// 135*57*174*26*
// 4*25*146*116*

#include <iostream>
#include <vector>
using namespace std;

int main() {
   int numTime;
   int i;

   cin >> numTime;
   vector<int> walkingNumbers(numTime);

   for (i = 0; i < walkingNumbers.size(); ++i) {
      cin >> walkingNumbers.at(i);
   }

    // output elements at even indices
   for (int x = 0; x < walkingNumbers.size(); x += 2) {
    if (walkingNumbers[x] % 2 != 0) {
        cout << walkingNumbers[x] << "*";
    }
   }

   cout << endl;

    // outpur elements at odd indicies
   for (int j = 1; j < walkingNumbers.size(); j += 2) {
    if (walkingNumbers[j] % 2 == 0) {
        cout << walkingNumbers[j] << "*";
    }
   }

    cout << endl;

   return 0;
}