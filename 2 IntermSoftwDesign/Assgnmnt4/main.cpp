#include <iostream>
#include <string>
#include "FavoritesManager.h"

using namespace std;

int main() {
    FavoritesManager manager(2);

    // String construction & assignment styles from the module
    string site1("https://www.foothill.edu");
    string site2 = "https://www.deanza.edu";
    string site3;
    site3 = "https://www.sjsu.edu";
    string site4 = "https://www.cppreference.com";

    manager.addFavorite(site1);
    manager.addFavorite(site2);
    manager.addFavorite(site3); // Triggers dynamic capacity growth
    manager.addFavorite(site4);

    cout << "Total links stored: " << manager.getCount() << endl;

    int index = 1;
    string selected = manager.getLinkAt(index);
    if (!selected.empty()) {
        cout << "Link at index " << index << ": " << selected
             << " (length: " << selected.length() << ")" << endl;
    }

    string exactSearch = "https://www.sjsu.edu";
    int posIndex = manager.findLink(exactSearch);
    cout << "Exact search for " << exactSearch << " -> index: " << posIndex << endl;

    string domainToFind = ".edu";
    int eduCount = 0;
    string* eduResults = manager.findByDomain(domainToFind, eduCount);

    cout << "Links containing '" << domainToFind << "' (" << eduCount << "):" << endl;
    for (int i = 0; i < eduCount; i++) {
        string line = "  - ";
        line.append(eduResults[i]);
        cout << line << endl;
    }

    delete[] eduResults;
    eduResults = nullptr;

    FavoritesManager copyManager(manager);
    cout << "Copied manager count: " << copyManager.getCount() << endl;

    return 0;
}