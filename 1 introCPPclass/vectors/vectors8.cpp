#include <iostream>
#include <vector>
using namespace std;

int main() {
   const int NUM_ELEMENTS = 4;
   vector<int> userVals(NUM_ELEMENTS);
   unsigned int i;
   
   userVals.at(0) = -2;
   userVals.at(1) = 3;
   userVals.at(2) = -6;
   userVals.at(3) = 7;
   
   for (i = 0; i < userVals.size(); ++i) {
      if (userVals.at(i) < 0) {
         userVals.at(i) = -1 * userVals.at(i);
      }
      cout << userVals.at(i) << endl;
   }
   
   return 0;
}