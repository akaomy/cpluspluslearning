#include <iostream>
#include "ArrayBasedList.h"

using namespace std;

int main() {

  ArrayBasedList lst = ArrayBasedList();
  cout << "new list initialized" << endl;

  // todo: debug insert() method to see why I am getting weird output when getting a certain element info
  lst.Insert(0, 10);
  lst.Insert(1, 20);
  lst.Insert(2, 30);
  lst.Insert(3, 40);

  cout << "list length after adding elements: " << lst.Count() << endl;
  cout << endl;

  cout << "print out current list: " << endl;
  for (int i = 0; i < lst.Count(); i++)
  {
    cout << "selected element " << i << ": " << endl;
    cout << lst.Get(i) << endl;
  }

  cout << "Delete item at certain index: "<< endl;
  lst.Delete(0); // delete first element
  cout << "list length after deletion: " << lst.Count() << endl;
  cout << "List after deletion: " << endl;

  for (int i = 0; i < lst.Count(); i++)
  {
  cout << "selected element " << i << ": " << endl;
  cout << lst.Get(i) << endl;
  }

  cout << "Search for 30: " << lst.Get(lst.Search(30)) << endl;
  cout << "Amount of elements in the list" << lst.Count() << endl;


  return 0;
}
