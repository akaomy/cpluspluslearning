#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "LinkedListNode.h"

template <typename T>
class LinkedList {
    public:
      Node<T>* head;
      Node<T>* tail;

      // constructor
      LinkedList() : head(nullptr), tail(nullptr) {};

      // destructor
      ~LinkedList() {};

      // get
      Node<T>* getHead() const
      {
        return head;
      };

      Node<T>* getTail() const
      {
        return tail;
      };
      // insert
          // beginnig
          // end
          // any position between beg. and end
      // delete
          // beginnig
          // end
          // any position between beg. and end
      // search


};



#endif //LINKEDLIST_H
