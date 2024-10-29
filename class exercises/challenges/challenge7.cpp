// Integer numWages is read from input, representing the number of integers to be read next. Then, the remaining integers are read and stored into vector wagesList. For each element in wagesList that is less than 140, assign the element with the element's current value plus 90.

// Ex: If the input is:

// 3
// 30 235 95

// then the output is:

// Raw wages: 30 235 95 
// Adjusted wages: 120 235 185 


#include <iostream>
#include <vector>
using namespace std;

int main() {
   int numWages;
   unsigned int i;
   vector<int> wagesList;
   
   cin >> numWages;
   
   wagesList.resize(numWages);
   
   for (i = 0; i < wagesList.size(); ++i) {
      cin >> wagesList.at(i);
   }
   
   cout << "Raw wages: ";
   for (i = 0; i < wagesList.size(); ++i) {
      cout << wagesList.at(i) << " ";
   }
   cout << endl;

   /* Your code goes here */

   cout << "Adjusted wages: ";
   for (i = 0; i < wagesList.size(); ++i) {
      cout << wagesList.at(i) << " ";
   }
   cout << endl;
   
   return 0;
}
