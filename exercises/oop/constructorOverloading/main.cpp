#include <iostream>
#include <string>
using namespace std;

class Item {
   public:
      Item(); // or
      // like this Item(string inittialName = "Undefined", int initialRating = -1);
      Item(string inittialName, int initialRating);
      void Print();

    private:
      string name;
      int rating;
};

// Note: define initial constructor explicitly
// because once custom constructor is created
// compiler will not created default one 
// that would allow to call it without arguments

// Default constructor
// Item::Item() {
//    name = "UndefinedName";
//    rating = -1;
// }
// or use default parameters when calling it in Class (public part) 

Item::Item() {
   name = "UndefinedName";
   rating = -1;
}


Item::Item() {
   name = "UndefinedName";
   rating = -1;
}

// Custom constructor
Item::Item(string inittialName, int initialRating) {
   name = inittialName;
   rating = initialRating;
}

// Prints name and rating on one line
void Item::Print() {
   cout << name << " -- " << rating << endl;
}

int main() {
   Item foodPlace;             // Calls default constructor
   Item coffeePlace("Tom", 4); // Calls constructor with different values

   foodPlace.Print();
   coffeePlace.Print();
   return 0;
}
