#include <iostream>
using namespace std;

class LinkedListNode {
    public:
        LinkedListNode(int dataValue) {
            cout << "In linkedlistnode constructor (" << dataValue << ")" << endl;
            data = dataValue;
        }

        ~LinkedListNode() {
            cout << "In linkedlistnode destructor (";
            cout << data << ")" << endl;
        }
    int data;
    LinkedListNode* next;
};

class LinkedList {
    public:
        LinkedList(); // constructor
        ~LinkedList(); // desctructor
        void Prepend(int dataValue);

        LinkedListNode* head;
};

LinkedList::LinkedList() {
    cout << "In Linkedlist constructor" << endl;

    // destructor deletes each node in linked list
    while (head) {
        LinkedListNode* next = head -> next;
        delete head;
        head = next;
    }
}

void LinkedList::Prepend(int dataValue) {
    LinkedListNode* newNode = new LinkedListNode(dataValue);
    newNode -> next = head;
    head = newNode;
}

int main () {
    LinkedList* list = new LinkedList;
    for (int i = 1; i <= 5; ++i) {
        list -> Prepend(i * 10);

        //the free the linked list
        //the linkedlist class destructor frees each node
        delete list;
    }

    return 0;
};