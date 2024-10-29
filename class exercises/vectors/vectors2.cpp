// Three doubles are read from input as variables distance1 to distance3. Declare a vector of doubles named walkingDistance and initialize the elements with the variables distance1 to distance3 in the opposite order the input doubles are read.

// Ex: If the input is 23.09 22.38 9.94, then the output is:

// 9.94 22.38 23.09 


#include <iostream>
#include <vector>
using namespace std;

int main () {
    double distance1;
	double distance2;
	double distance3;
	unsigned int i;

    cin >> distance1;
	cin >> distance2;
	cin >> distance3;

    vector<double> walkingDistance = {distance3, distance2, distance1};

    for (i = 0; i < walkingDistance.size(); ++i) {
      cout << walkingDistance.at(i) << " ";
    }
    cout << endl;
   
   return 0;

}