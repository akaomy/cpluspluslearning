// Integers are read from input and stored into a vector until 0 is read. Output the elements in the vector, replacing any elements less than the vector's last element with "BAM". End each number with a newline.

// Ex: If the input is 8 -12 9 -3 0, the vector's last element is -3. Thus, the output is:

// 8
// BAM
// 9
// -3

#include <iostream>
#include <vector>
using namespace std;

int main() {
   vector<int> vect1;
   int value;
   int i;

   cin >> value;
   while (value != 0) {
      vect1.push_back(value);
      cin >> value;
   }

    cout << " " << endl;
    for (i = 0; i < vect1.size(); ++i) {
        if (vect1.at(vect1.size() - 1) > vect1.at(i)) {
            cout << "BAM" << endl;
        } else {
            cout << vect1.at(i) << endl;
        }
    }

   return 0;
}