#ifndef LISTCUST_H
#define LISTCUST_H

class ListCustADT {
    private:
        int number_of_items;
        int * list_of_items;

    public:
        ListCustADT(); // constructor
        ~ListCustADT(); // distructor
        int Get(int index);
        void Insert(int value, int index);
        int Search(int value);
        void Delete(int index);
        int Count(); // number of items the list has at a moment
};

// complexity: constant O(1)
int ListCustADT::Get(int index) {

  // check if the index is out of bound
  if (index < 0 || index > number_of_items)
    return -1;

  return number_of_items[index];

}

void ListCustADT::Insert(int value, int index) {
    // to increase capacity of the list_of_items each time we insert a new item
    // after that we need to iterate each item of the old list_of_items
    // and assign all of them to the new list
    // plus insert item that user intended to insert on certain position

    // check if the index is out of bound
    if (index < 0 || index > number_of_items)
        // aborts the operation, but doesn't return anything since the method is void type > it cannot return anyting
        return;

    // copy current array
    // increase array length
    // initialize new array
    // fill in array with values
    // remove copied array

}



#endif //LISTCUST_H
