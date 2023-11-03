#include <iostream>
#include <vector>
using namespace std;

// numDistance is read from input as the size of the vector. Then, numDistance elements are read from input into the vector walkingListings. Use a loop to access each element in the vector and if the element is an odd number, output the element followed by a newline.

// Ex: If the input is 7 9 198 8 80 35 149 75, then the output is:

// 9
// 35
// 149
// 75


int main() {
   int numDistance;
   unsigned int i, j;

   cin >> numDistance;
   vector<int> walkingListings(numDistance);

   for (i = 0; i < walkingListings.size(); ++i) {
      cin >> walkingListings.at(i);
   }

   for (j = 0; j < walkingListings.size(); ++j) {
    if (walkingListings[j] % 2 != 0) {
        cout << walkingListings[j] << endl;
    } else {
        break;
    }
   }

   return 0;
}