#include <iostream>
#include "LinkedList.h"

int main() {
  // create a LinkedList on heap
  LinkedList<int>* heapLst = new LinkedList<int>();

  heapLst->InsertAtEnd(1);
  heapLst->InsertAtEnd(2);
  heapLst->InsertAtEnd(3);
  heapLst->InsertAtEnd(4);

  std::cout << "Linked List: " << std::endl;
  heapLst->PrintList();
  // delete heapLst;

  return 0;
}