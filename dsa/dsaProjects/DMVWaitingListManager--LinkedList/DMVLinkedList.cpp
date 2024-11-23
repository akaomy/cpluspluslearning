#include "DMVLinkedList.h"
#include <iostream>
#include <vector>


int main()
{
  DMVLinkedList waitingList;
  int amountOfPeople = 5;

  for (int i = 0; i < amountOfPeople; i++)
  {
    // temp for testing purposes
    std::string name = "Person " + std::to_string(i+1);
    std::string time = "10:" + std::to_string(30+i) + "AM";

    waitingList.addPersonToTheEnd(name, time);
  }
  waitingList.removePersonFromEnd();

  waitingList.displayWaitlist();

  return 0;
}