# Favorites Manager

## Purpose
This assignment will be to create your own container class with a dynamic array. Think of it as your own custom, simplified version of the vector class. Because you must write your own container class with a dynamic array, you cannot use vector at all for this assignment!

## UMPIRE Technical Interview Strategy: step-by-step way to:

- Understand the assignment problem
- Match the problem to a possible solution
- Plan the solution with visualization and pseudocode
- Implement the code
- Review the code with predefined tests
- Evaluate the performance of your solution 

## To do:
create a container class so your program can be used for any number of hyperlinks that need to be stored as a favorites collection of webpages.  Each line of the file will be a single hyperlink string that will be stored in a dynamic array (do not use vector for this assignment!).  The dynamic array should be declared in the private section of your container class.

## 1 Understand
Goal is to build a custom container class that stores any number of hyperlink strings in a private dynamic array to act as a favorites collection of webpages without use of std::vector.

- store hyperlinks as a collection of individual strings in a class member array.
- automatically grow the dynamic array's storage capacity when more hyperlinks are added than the current capacity allows. You can start with a small capacity to test this feature.
- return a count of the total number of hyperlinks in the class member array.
- display the hyperlink from the class member array when an index number is provided.  
- search the container for a specific hyperlink and return its location (index number).
- search the container for a specific domain (.com, .edu, etc), and display all hyperlinks from the class member array that contain that search string.
- no `cout`, `cin`, `getline` inside the class. All of them have to be in main()
- use only techniques that were covered in the modules (do not use advanced or unapproved features of C++ outside of course)

## 2 Match
### Create container class with a private dynamic array `std::string*` (not a vector)
### Private class data members:
  - `std::string* links` - pointer to the dynamic allocated array of links strings
  - `int count` - current # of links stored in the array
  - `int capacity` - total number of slots currently allocated in the dynamic array
### Functions performing only one task:
  - constructor (plus copy constructor) and destructor: 
    - initialize `count`, `capacity`, allocate `links` with `new[]`, use `delete[]` in the destructor to clean up memory
  - resize function:
    - allocate larger dynamic array to double capacity, copy existing elements over with a `for` loop, free the old array with `delete[]`, update the pointer and `capacity`
  - add hyperlink function: check if resize helper is full -> `count == capacity`, store new links in the `links[count]`, increment `count`
  - count links function: return `count` -> total links stored in the array
  - get links at defined index function: check the index range and return the link at that index or an empty string if out of bounds to make `main()` print it with `cout`
  - find exact link function: loop through `link` to find exact matching link and return its index or `-1` if not found
  - search by domain function: loop through `links` using `std::string::find` to locate links that contain the domain substring (e.g. .com), pass back the matching links and match count for `main()` to display the result
### Techniques:
Dynamic memory allocation and deallocation with `new[]` and `delete[]`, pointers, for loops, if/else bounds and capacity checks, `std::string` operations (`==` and `.find()`), and pass-by-reference / return values for communicating with `main()`.

## 3 Pseudocode
Class: FavoritesManager
Function: Manages a dynamic array of hyperlink strings without using `std::vector`.

Class Functions:

1. FavoritesManager(int initialCapacity = 2)
- Allocate dynamic string array of size `initialCapacity` (minimum 1)
- Set `size = 0` and `capacity = initialCapacity`

2. FavoritesManager(const FavoritesManager& other)
- Allocate new dynamic string array of size `other.capacity`
- Copy each element from `other.items[0..other.size-1]`
- Set `size = other.size`, `capacity = other.capacity`

3. FavoritesManager& operator=(const FavoritesManager& other)
- Protect against self-assignment (`if this != &other`)
- Delete existing items array
- Allocate new array of `other.capacity` and copy elements
- Return `*this`

4. ~FavoritesManager()
- Deallocate the items array using `delete[]`

5. void addFavorite(const std::string& url)
- If `size == capacity`, double capacity, allocate larger array, copy old items,
  `delete[]` old array, and update items pointer
- Store url at `items[size]` and increment size

6. int getCount() const
- Return array's size

7. std::string getAt(int index) const
- If index is valid (`0 <= index < size`), return `items[index]` otherwise return ""

8. int findIndex(const std::string& url) const
- Loop i from 0 to `size - 1: if items[i] == url`, return i
- Return -1 if not found.

9. std::string* findByDomain(const std::string& domain, int& matchCount) const
- Set `matchCount = 0`
- Count how many items[i] contain domain (using `std::string::npos` check)
- If `matchCount == 0`, return `nullptr`
- Allocate dynamic array of size `matchCount`, populate matching strings, return array