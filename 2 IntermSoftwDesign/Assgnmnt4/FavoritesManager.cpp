#include "FavoritesManager.h"

using namespace std;

void FavoritesManager::resize(int newCapacity) {
    if (newCapacity < 1) {
        newCapacity = 1;
    }
    string* newItems = new string[newCapacity];
    int copyCount = (size < newCapacity) ? size : newCapacity;
    for (int i = 0; i < copyCount; ++i) {
        newItems[i] = items[i];
    }
    delete[] items;
    items = newItems;
    capacity = newCapacity;
    size = copyCount;
}

FavoritesManager::FavoritesManager(int initialCapacity) {
    if (initialCapacity < 1) {
        initialCapacity = 1;
    }
    capacity = initialCapacity;
    size = 0;
    items = new string[capacity];
}

FavoritesManager::FavoritesManager(const FavoritesManager& other) {
    capacity = other.capacity;
    size = other.size;
    items = new string[capacity];
    for (int i = 0; i < size; ++i) {
        items[i] = other.items[i];
    }
}

FavoritesManager& FavoritesManager::operator=(const FavoritesManager& other) {
    if (this != &other) {
        delete[] items;
        capacity = other.capacity;
        size = other.size;
        items = new string[capacity];
        for (int i = 0; i < size; ++i) {
            items[i] = other.items[i];
        }
    }
    return *this;
}

FavoritesManager::~FavoritesManager() {
    delete[] items;
    items = nullptr;
}

void FavoritesManager::addFavorite(const string& url) {
    if (size >= capacity) {
        resize(capacity * 2);
    }
    items[size] = url;
    ++size;
}

int FavoritesManager::getCount() const {
    return size;
}

string FavoritesManager::getAt(int index) const {
    if (index < 0 || index >= size) {
        return "";
    }
    return items[index];
}

int FavoritesManager::findIndex(const string& url) const {
    for (int i = 0; i < size; ++i) {
        if (items[i] == url) {
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

    for (int i = 0; i < size; ++i) {
        if (items[i].find(domain) != string::npos) {
            ++matchCount;
        }
    }

    if (matchCount == 0) {
        return nullptr;
    }

    string* matches = new string[matchCount];
    int idx = 0;
    for (int i = 0; i < size; ++i) {
        if (items[i].find(domain) != string::npos) {
            matches[idx] = items[i];
            ++idx;
        }
    }

    return matches;
}