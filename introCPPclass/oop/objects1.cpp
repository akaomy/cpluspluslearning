#include <iostream>
using namespace std;


class Restaurant {
    // member functions go here
    public:
        void SetName(string restaurantName);
        void SetRating(int userRating);
        void Print();
    // data memebers go here
    private:
      // good practice and preferred to initiallize all variables upon declaration (for c++ 11)
      //   string name = "Default";
      //   int rating = -1; // indicates that rating was not set
      // or using constructor leave these variables without initialization
      string name;
      int rating;

};


// if no explicitly created constructor defines compiler will implicitly 
// define its own without any statements

// user defined constructor
// since these variables were already declared in the class as private data members
// do not redeclare them here
Restaurant::Restaurant() {
   name = "Default";
   rating = -1;
}

// :: <-scope resolution operator
void Restaurant::SetName(string restaurantName) {
   name = restaurantName;
}

void Restaurant::SetRating(int userRating) {
   rating = userRating;
}

void Restaurant::Print() {
   cout << name << " -- " << rating << endl;
}
