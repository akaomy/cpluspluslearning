#include "Node.h"
#include <iostream>

using namespace std;

void PrintNode(Node *node) {
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
  const auto first_node = new Node;
  first_node->value = 1;

  const auto second_node = new Node;
  second_node->value = 2;

  const auto third_node = new Node;
  third_node->value = 3;

  first_node->next = second_node;
  second_node->next = third_node;

  PrintNode(first_node);

  return 0;
}