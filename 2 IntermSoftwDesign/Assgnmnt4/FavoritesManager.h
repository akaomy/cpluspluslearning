#ifndef FAVORITES_MANAGER_H
#define FAVORITES_MANAGER_H

#include <string>

class FavoritesManager {
private:
    std::string* links;
    int count;
    int capacity;

    void resizeArray(int newCapacity);

public:
    // Precondition: initialCapacity is an integer (defaults to 2; values < 1 are treated as 1).
    // Postcondition: Creates an empty FavoritesManager with capacity >= 1 and count == 0.
    FavoritesManager(int initialCapacity = 2);

    // Precondition: other is a valid FavoritesManager object.
    // Postcondition: Creates a deep copy of other's dynamic string array and state.
    FavoritesManager(const FavoritesManager& other);

    // Precondition: other is a valid FavoritesManager object.
    // Postcondition: Replaces current dynamic array with a deep copy of other and returns *this.
    FavoritesManager& operator=(const FavoritesManager& other);

    // Precondition: Object exists.
    // Postcondition: Releases the dynamically allocated string array.
    ~FavoritesManager();

    // Precondition: url is a string representing a hyperlink.
    // Postcondition: Appends url to links (growing capacity if full) and increments count.
    void addFavorite(const std::string& url);

    // Precondition: None.
    // Postcondition: Returns the number of hyperlinks currently stored.
    int getCount() const;

    // Precondition: index is a 0-based index into stored hyperlinks.
    // Postcondition: Returns links[index] if 0 <= index < count, or an empty string otherwise.
    std::string getLinkAt(int index) const;

    // Precondition: targetUrl is the exact hyperlink string to locate.
    // Postcondition: Returns the 0-based index if found, or -1 if not found.
    int findlink(const std::string& targetUrl) const;

    // Precondition: domain is a search substring (e.g., ".com" or ".edu");
    //               matchCount is passed by reference.
    // Postcondition: Sets matchCount to the number of links containing domain and returns a
    //                dynamically allocated string array of matches (or nullptr if none match).
    std::string* findByDomain(const std::string& domain, int& matchCount) const;
};

#endif