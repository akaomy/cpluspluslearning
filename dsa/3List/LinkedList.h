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
        T getHead() const
        {
            if (head != nullptr)
            {
                return head->value;
            }
            return T(); // Return default value (0 for int, nullptr for pointer types, etc.)
        };

        T getTail() const
        {
            if (tail != nullptr)
            {
                return tail->value;
            }
            return T(); // Return default value (0 for int, nullptr for pointer types, etc.)
        };

        // insert
        int insertAtEnd(T nodeValue)
        {
            // create a new node with some vals
            auto *newNode = new Node<T>(nodeValue);
            // check if the LinkedList is empty
            if (head == nullptr && tail == nullptr)
            {
                head = newNode;
                tail = newNode;
            // check if there is at least one element present
            }
            else
            {
                // current last node connects to newNode
                tail->next = newNode;
                tail = newNode;
            }
            return 1;
        };

    void printList()
    {
        Node<T> *current = head;
        // traverse the list and print each node value and next pointer
        while (current != nullptr)
        {
            std::cout << "Node current value: " << current->value << std::endl;
            if (current->next != nullptr)
            {
                std::cout << "Node current next value " << current->next->value << std::endl;
            }
            else
            {
                std::cout << "Node current next nullptr" << std::endl;
            }

            std::cout << std::endl;
            current = current->next;
        }
    }


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
