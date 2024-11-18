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


        T GetValue(T nodeIndex) const
        {
            // TODO: get specific item with given index
            if (head != nullptr)
            {
                return head->value;
            }
            return T(); // Return default value (0 for int, nullptr for pointer types, etc.)
        };

        T GetIndex(T nodeValue) const
        {
            // TODO: get value of a node with given index
        }

        int InsertAtEnd(T nodeValue)
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

        int insertAtBeg()
        {
            // TODO:
        }

        int insertAtIndex()
        {
            // TODO:
        }

        int DeleteAtEnd()
        {
            // get previous node
            // how?
            // TODO
        }

        int DeleteAtBeg()
        {
            // TODO:
        }

        int DeleteAtIndex()
        {
            // TODO:
        }

        void PrintList()
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
};



#endif //LINKEDLIST_H
