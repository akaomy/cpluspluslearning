#include "Node.h"
#include <iostream>

using namespace std;

void PrintNode(const Node<float> *node) {
  // print out initial node
  // until it find NULL for the Next pointer
  // meaning end of the node chain

  while (node != nullptr)
  {
    cout << node->value << "->";
    node = node->next;
  }
};

int main() {
  const auto first_node = new Node<float>(1.23);
  const auto second_node = new Node<float>(3.56);
  const auto third_node = new Node<float>(7.89);

  first_node->next = second_node;
  second_node->next = third_node;

  PrintNode(first_node);

  return 0;
}