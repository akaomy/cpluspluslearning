#include "Person.h"
#include <string>
#include <map>
#include <iostream>

#ifndef DMVLINKEDLIST_H
#define DMVLINKEDLIST_H

class DMVLinkedList {
    public:
        Person* head; // pointer to the first person in list
        Person* tail; // pointer to the last person in list
        int size;     // number of people in list

        // constructor
        DMVLinkedList() : head(nullptr), tail(nullptr), size(0) {}

        // distructor
        ~DMVLinkedList() {
        // TODO: clear(); // remove all nodes in the list
        };

    void addPersonToTheEnd(const std::string& name, const std::string registrationTime)
    {
        /* adds new person at the end of the list
            +addPersonToTheEnd(name: string): void */

        // create person
        Person* newPerson = new Person(name, registrationTime);

        // assigns this person to the head and tail of the list
        // if head is empty
        if (!head)
        {
            head = tail = newPerson;
        }
        // if there is already a person
        // assigns tail of Linked List to newPerson
        // create link between existing last node and the new node
        else
        {
            tail->next = newPerson; // tail->next part of previous node is now linked to memory address of newPerson
            tail = newPerson;
        }
        size++;
    }

    int removePersonFromEnd(std::string name)
    {
    /*    removes new person at the end of the list
        +removePersonFromEnd(name: string): int */

      // check if linked list is empty
      if (head == nullptr)
      {
          std::cout << "linked list is empty" << std::endl;
          return 0;
      }

      // if list not empty:
      // 1.list has only one node
      if (head == tail)
      {
        delete head; // a tak mozhno bylo?
        head = tail = nullptr;
        size--;
        return 1;
      }

      // 2.list had many nodes
      Person* current = head;
      // traverse the list to find second to last node
      while (current->next != tail)
      {
        current = current->next;
      }
      delete tail;
      tail = current;
      tail->next = nullptr;
      size --;

      return 1;
    };

    void displayWaitlist()
    {
        /*    displayes list of names and time of registration of each name
           +displayWaitlist(): void */

        Person* current = head;
        std::cout << "You linked list" << std::endl;
        while (current->next != tail)
        {
            std::cout << "[Name: " << current->name << " Time: " << current->registrationTime << "]" << "\t";
            current = current->next;
        }
    };
};


//    +addPersonAtPosition(name: string, index: int): void
//    +removePersonAtPosition(index: int): void
//    +displayWaitlist(): map<int, string>
//    +findPerson(name: string): int
//    +findPosition(index: int): string

#endif //DMVLINKEDLIST_H
