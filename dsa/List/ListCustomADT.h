#ifndef LISTCUST_H
#define LISTCUST_H


class ListCustADT
{
    private:
        int max_list_length;
        int list_length;
        int *items_list;

    public:
        ListCustADT(int size = 10); // constructor
        ~ListCustADT(); // destructor
        int Get(int index);
        void Insert(int value, int index);
        int Search(int value);
        void Delete(int index);
        int Count(); // number of items the list has at a moment
};

ListCustADT::ListCustADT(const int size)
{
  max_list_length = size;
  list_length = 0;
  items_list = new int[max_list_length];
}

ListCustADT::~ListCustADT()
{
  delete [] items_list; // free up memory when object is destroyed
}

// complexity: constant O(1)
int ListCustADT::Get(int index)
{
  // check if the index is out of bound
  if (index < 0 || index >= list_length)
  throw std::out_of_range("index is out of range in Get()");

  // returns address of the index, not integer
  return items_list[index];
}

void ListCustADT::Insert(int index, int value)
{
  // inserting a value at certain index - shift elements toward the tail

  // check if index is out of bound todo: HOW TO CHECK IT without preventing the method to add any items the the list
  if (index < 0 || index > list_length) throw std::out_of_range("Index out of bounds in Insert()");

  if (list_length >= max_list_length)
    throw std::out_of_range("List is full; Cannot insert new elements");

  // shift elements to make room for the new element
  for (int i = list_length; i > index; i++)
  {
    items_list[i] = items_list[i - 1];
  }

  items_list[index] = value;
  list_length++;
}

// method's complexity O(n)
int ListCustADT::Search(int searchValue)
{
  // iterate through each item in the list until it finds matched value
  // return array index of found value
  for (int i = 0; i < list_length; i++)
  {
    if (items_list[i] == searchValue)
      return i;
  }
  return -1;
}

void ListCustADT::Delete(int index)
{
  // iterate through all list elements and assign them into a new array of List elements

  // check out of bounf index
  if (index < 0 || index >= list_length)
    throw std::out_of_range("Index out of bounds in Delete()");

  // shift elements to the left
  for (int i = index; i < list_length - 1; i++)
  {
    items_list[i] = items_list[i + 1];
  }

  list_length--;
}

int ListCustADT::Count()
{
  return list_length;
}

#endif //LISTCUST_H
