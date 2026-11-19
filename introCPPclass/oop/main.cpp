#include <iostream>
#include "objects1.cpp"

using namespace std;

int main () {
    Restaurant favLunchPlace;
    Restaurant favDinnerPlace;

    favLunchPlace.SetName("Central Deli");
    favLunchPlace.SetRating(4);

    favDinnerPlace.SetName("Friends Cafe");
    favDinnerPlace.SetRating(5);

    cout << "My favorite restaurants: " << endl;
    favLunchPlace.Print();
    favDinnerPlace.Print();


    return 0;
};