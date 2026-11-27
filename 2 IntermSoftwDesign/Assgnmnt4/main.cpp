#include <iostream>
#include <string>
#include "FavoritesManager.h"

using namespace std;

int main() {
    // Start with a small capacity (2) to test dynamic resizing
    FavoritesManager favs(2);

    favs.addFavorite("https://www.foothill.edu");
    favs.addFavorite("https://www.cppreference.com");
    favs.addFavorite("https://www.ucsc.edu"); // Triggers capacity growth
    favs.addFavorite("https://github.com");

    cout << "Total favorites stored: " << favs.getCount() << endl;
    cout << "Item at index 2: " << favs.getAt(2) << endl;

    string target = "https://github.com";
    cout << "Index of " << target << ": " << favs.findIndex(target) << endl;

    string missing = "https://example.org";
    cout << "Index of " << missing << ": " << favs.findIndex(missing) << endl;

    // Search by domain (.edu)
    int eduCount = 0;
    string* eduLinks = favs.findByDomain(".edu", eduCount);
    cout << "Matches for '.edu' (" << eduCount << "):" << endl;
    for (int i = 0; i < eduCount; ++i) {
        cout << "  - " << eduLinks[i] << endl;
    }
    delete[] eduLinks;
    eduLinks = nullptr;

    // Test copy constructor
    FavoritesManager copiedFavs(favs);
    cout << "Copied manager count: " << copiedFavs.getCount() << endl;

    return 0;
}