#include <iostream>
using namespace std;


class Restaurant {
    // member functions
    public:
        void SetName(string restaurantName);
        void SetRating(int userRating);
        void Print();
    private:
        string name;
        int rating;

};

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
