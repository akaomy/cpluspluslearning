#include <iostream>
#include "LinkedList.h"

int main() {
  // create a LinkedList on heap
  LinkedList<int>* heapLst = new LinkedList<int>();

  heapLst->insertAtEnd(1);
  heapLst->insertAtEnd(2);
  heapLst->insertAtEnd(3);
  heapLst->insertAtEnd(4);

  std::cout << "Linked List: " << std::endl;
  heapLst->printList();
  // delete heapLst;

  return 0;
}