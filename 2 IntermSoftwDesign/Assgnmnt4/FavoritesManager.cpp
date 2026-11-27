#include "FavoritesManager.h"

using namespace std;

void FavoritesManager::resizeArray(int newCapacity) {
    if (newCapacity < 1) {
        newCapacity = 1;
    }

    string* updatedLinks = new string[newCapacity];
    int limit = (count < newCapacity) ? count : newCapacity;

    for (int i = 0; i < limit; i++) {
        updatedLinks[i] = links[i];
    }

    delete[] links;
    links = updatedLinks;
    capacity = newCapacity;
    count = limit;
}

FavoritesManager::FavoritesManager(int initialCapacity) {
    if (initialCapacity < 1) {
        capacity = 1;
    } else {
        capacity = initialCapacity;
    }
    count = 0;
    links = new string[capacity];
}

FavoritesManager::FavoritesManager(const FavoritesManager& other) {
    capacity = other.capacity;
    count = other.count;
    links = new string[capacity];

    for (int i = 0; i < count; i++) {
        links[i] = other.links[i];
    }
}

FavoritesManager& FavoritesManager::operator=(const FavoritesManager& other) {
    if (this != &other) {
        delete[] links;
        capacity = other.capacity;
        count = other.count;
        links = new string[capacity];

        for (int i = 0; i < count; i++) {
            links[i] = other.links[i];
        }
    }
    return *this;
}

FavoritesManager::~FavoritesManager() {
    delete[] links;
    links = nullptr;
}

void FavoritesManager::addFavorite(const string& url) {
    if (count == capacity) {
        resizeArray(capacity * 2);
    }
    links[count] = url;
    count++;
}

int FavoritesManager::getCount() const {
    return count;
}

string FavoritesManager::getLinkAt(int index) const {
    if (index < 0 || index >= count) {
        return "";
    }
    return links[index];
}

int FavoritesManager::findHyperlink(const string& targetUrl) const {
    for (int i = 0; i < count; i++) {
        if (links[i] == targetUrl) {
            return i;
        }
    }
    return -1;
}

string* FavoritesManager::findByDomain(const string& domain, int& matchCount) const {
    matchCount = 0;
    if (domain.empty()) {
        return nullptr;
    }

    // Search each stored string from position 0 using find() and string::npos
    for (int i = 0; i < count; i++) {
        size_t foundPosition = links[i].find(domain, 0);
        if (foundPosition != string::npos) {
            matchCount++;
        }
    }

    if (matchCount == 0) {
        return nullptr;
    }

    string* matchedLinks = new string[matchCount];
    int matchIdx = 0;

    for (int i = 0; i < count; i++) {
        if (links[i].find(domain, 0) != string::npos) {
            matchedLinks[matchIdx] = links[i];
            matchIdx++;
        }
    }

    return matchedLinks;
}