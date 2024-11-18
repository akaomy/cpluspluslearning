#ifndef SINGLYLINKEDLISTNODEBASED_H
#define SINGLYLINKEDLISTNODEBASED_H
#include "Node.h"

template <typename T>
class LinkedList
{
    private:
      int ll_count;

    public:
      // first node
      Node<T> *head;

      // last node
      Node<T> *tail;

      LinkedList<T>(); // constructor
      ~LinkedList(); // desctructor


      Node<T> *Get(int index);

      // insert
      public: int Insert(int index, T value);
      public: T InsertHead(T value);
      public: T InsertTail(T value);

      // remove
      public: T Remove(int index);
      public: T RemoveHead();
      public: T RemoveTail();

      // search
      public: T Search(T value);

      public: int Length();
      void Print();
};

template <typename T>
LinkedList<T>::LinkedList() {} // constructor definitions

template <typename T>
LinkedList<T>::~LinkedList() {} // destructor definitions

template <typename T>
int LinkedList<T>::Insert(int index, T value) {}

template <typename T>
T LinkedList::Get(int index) {}

template <typename T>
T LinkedLIst::Remove(int index) {}

template <typename T>
int LinkedList::Length() {}

T LinkedList::InsertHead(T value) {}
T LinkedList::InsertTail(T value) {}
T LinkedList::RemoveHead(T value) {}
T LinkedList::RemoveTail(T value) {}


#endif //SINGLYLINKEDLISTNODEBASED_H
