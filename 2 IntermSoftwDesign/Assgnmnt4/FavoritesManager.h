#ifndef CPLUSPLUSLEARNING_FAVORITESMANAGER_H
#define CPLUSPLUSLEARNING_FAVORITESMANAGER_H

#include <string>

class FavoritesManager {
    private:
        std::string* items;
        int size;
        int capacity;

        void resize(int newCapacity);

    public:
        // Precondition: initialCapacity >= 1 and if < 1, defaults to 1
        // Postcondition: creates an empty FavoritesManager with capacity >= 1 and size == 0
        FavoritesManager(int initialCapacity = 2);

        // Precondition: `other` is a valid FavoritesManager object
        // Postcondition: creates a deep copy of other with its own heap array
        FavoritesManager(const FavoritesManager& other);

        // Precondition: other is a valid FavoritesManager object
        // Postcondition: replaces current contents with a deep copy of other and returns `*this`
        FavoritesManager& operator=(const FavoritesManager& other);

        // Precondition: object exists
        // Postcondition: releases heap-allocated array memory
        ~FavoritesManager();

        // Precondition: url is a non-empty string
        // Postcondition: adds url to the collection, growing capacity if full, and increments size
        void addFavorite(const std::string& url);

        // Precondition: None
        // Postcondition: Returns the number of hyperlinks currently stored
        int getCount() const;

        // Precondition: 0 <= index < getCount()
        // Postcondition: Returns the hyperlink at index, or an empty string if index is out of range
        std::string getAt(int index) const;

        // Precondition: url is a hyperlink string to search for
        // Postcondition: Returns the 0-based index of url if found, or -1 if not found
        int findIndex(const std::string& url) const;

        // Precondition: domain is a non-empty substring; matchCount is passed by reference
        // Postcondition: Sets matchCount to number of matching hyperlinks and returns a dynamically
        // allocated array of matches (caller must delete[] it), or nullptr if none match
        std::string* findByDomain(const std::string& domain, int& matchCount) const;
};

#endif //CPLUSPLUSLEARNING_FAVORITESMANAGER_H
