#ifndef SINGLYLINKEDLISTNODEBASED_H
#define SINGLYLINKEDLISTNODEBASED_H


template <typename T>
class LinkedList
{
    private:
      int ll_count;

    public:
      T value;
      LinkedList<T> *next;

      LinkedList<T>(); // constructor
      ~LinkedList(); // desctructor

      public: int Insert(T value);
      public: T Get(int index);
      public: T Remove(int index);
      public: int Length();

      public: T InsertHead(T value);
      public: T InsertTail(T value);
      public: T RemoveHead();
      public: T RemoveTail();

};

LinkedList::LinkedList() {} // constructor definitions
LinkedList::~LinkedList() {} // destructor definitions

int LinkedList::Insert(T value) {}
T LinkedList::Get(int index) {}
T LinkedLIst::Remove(int index) {}
int LinkedList::Length() {}

T LinkedList::InsertHead(T value) {}
T LinkedList::InsertTail(T value) {}
T LinkedList::RemoveHead(T value) {}
T LinkedList::RemoveTail(T value) {}


#endif //SINGLYLINKEDLISTNODEBASED_H
