#ifndef NODE_H
#define NODE_H

template <typename T>
class Node {
    public:
      T value;
      Node<T> *next;

    Node(T value): value(value), next(nullptr) {} // constructor here
};

#endif //NODE_H
