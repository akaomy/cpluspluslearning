#include <iostream>
using namespace std;


class Restaurant {
    public:
        void SetName(string restaurantName);
        void SetRating(int userRating);
        void Print();
    private:
        string name;
        int rating;

}


main () {
    Restaurant favPlace;
    favPlace.SetName("Central Plaza");

    return 0;
};