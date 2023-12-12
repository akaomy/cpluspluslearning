#include <iostream>
#include <string>
using namespace std;

class Item {
   public:
      Item();
      Item(string inittialName, int initialRating);
      void Print();

    private:
      string name;
      int rating;
};

// Default constructor
Item::Item() {
   name = "UndefinedName";
   rating = -1;
}

// Another constructor
Item::Item(string inittialName, int initialRating) {
   name = inittialName;
   rating = initialRating;
}

// Prints name and rating on one line
void Item::Print() {
   cout << name << " -- " << rating << endl;
}

int main() {
   Item foodPlace;              // Calls default constructor
   Item coffeePlace("Tom", 4); // Calls constructor with different values

   foodPlace.Print();
   coffeePlace.Print();
   return 0;
}
