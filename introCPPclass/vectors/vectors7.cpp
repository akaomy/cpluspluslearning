#include <iostream>
#include <vector>
using namespace std;

int main() {
   const int NUM_ELEMENTS = 4;
   vector<int> userVals(NUM_ELEMENTS);
   unsigned int i;
   int maxVal;
   
   userVals.at(0) = 2;
   userVals.at(1) = 5;
   userVals.at(2) = 7;
   userVals.at(3) = 3;
   
   maxVal = userVals.at(0);
   for (i = 0; i < userVals.size(); ++i) {
    cout << " before entering if else" << " maxVal is " << maxVal << " and userVals.at(i) is " << userVals.at(i) << endl;  
      if (userVals.at(i) >= maxVal) {
         maxVal = userVals.at(i);
         cout << "maxVal " << maxVal << endl;
      }
   }
   
   return 0;
}