#include <iostream>
#include "LinkedList.h"

int main() {
  // create a LinkedList on heap
  LinkedList<int>* heapLst = new LinkedList<int>();

  // getHead
  Node<int>* headNode = heapLst->getHead();

  // getTail
  Node<int>* tailNode = heapLst->getTail();

  std::cout << "head node: " << headNode << std::endl;
  std::cout << "tail node: " << tailNode << std::endl;

  return 0;
}