#ifndef LISTCUST_H
#define LISTCUST_H


class ListCustADT
{
    private:
        int number_of_items;
        int * list_of_items;

    public:
        ListCustADT(); // constructor
        ~ListCustADT(); // destructor
        int Get(int index);
        void Insert(int value, int index);
        int Search(int value);
        void Delete(int index);
        int Count(); // number of items the list has at a moment
};

ListCustADT::ListCustADT()
{
  number_of_items = 0;
  list_of_items = nullptr;
}

ListCustADT::~ListCustADT()
{
  delete [] list_of_items; // free up memory when object is destroyed
}

// complexity: constant O(1)
int ListCustADT::Get(int index)
{

  // check if the index is out of bound
  if (index < 0 || index > number_of_items)
    return -1;

  return list_of_items[index];

}


void ListCustADT::Insert(int value, int index)
{
    // to increase capacity of the list_of_items each time we insert a new item
    // after that we need to iterate each item of the old list_of_items
    // and assign all of them to the new list
    // plus insert item that user intended to insert on certain position

    // check if the index is out of bound
    if (index < 0 || index > number_of_items)
        // aborts the operation, but doesn't return anything since the method is void type > it cannot return anyting
        return;

    // initialize new array
    int *newArray = new int[number_of_items + 1];

    // copy elements of the old array to the new array
    for (int i = 0, j = 0; i < number_of_items; i++, j++) {
      if (j == index)
        {
            newArray[i] = value; // insert item at the specified index
            ++j; // move to the next position in the new array
        }
        newArray[j] = list_of_items[i];
    }

    // free the old array memory
    delete[] list_of_items;

    // point to the new array
    list_of_items = newArray;

    // update the count of items by one
    number_of_items++;
}

// method's complexity O(n)
int ListCustADT::Search(int searchValue)
{
  // iterate through each item in the list until it finds matched value
  // return array index of found value
  for (int i = 0; i < number_of_items; i++)
  {
    if (list_of_items[i] == searchValue)
      return i;
  }
  return -1;
}

void ListCustADT::Delete(int index)
{
  // iterate through all list elements and assign them into a new array of List elements

  // check out of bounf index
  if (index < 0 || index > number_of_items)
    return;

    // initialize new array
    int *newArray = new int[number_of_items];

    // copy elements of the old array to the new array
    for (int i = 0, j = 0; i < number_of_items; i++, j++) {
        if (j == index)
        {
            continue; // skip element at specified index
        }
        newArray[j++] = list_of_items[i];
    }

    // free the old array memory
    delete[] list_of_items;

    // point to the new array
    list_of_items = newArray;

    // update the count of items by one
    number_of_items--;
}

#endif //LISTCUST_H
