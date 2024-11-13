#include <iostream>
#include <vector>

using namespace std;

template <typename T>
// Write a function that takes in a list and prints each item in the list.
void listItems(T& items)
{
  for (const auto& item: items)
  {
    cout  << item << " " << "\t";
  }
  cout << endl;
  cout << endl;
}

int main()
{
  cout << "problem 1: printout each char in a given item list for each data type:" << endl;
  // string
  // array
  // vector
      // int
      // floating point
      // char
      // boolean

  int arrInt[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  float arrFloat[] = {1.2, 2.3, 3.4, 5.5, 6.6, 7.7, 8.8, 9.9, 10.10};
  char arrChar[] = {'a', 'b', 'c', 'd', 'e'};
  bool arrBool[] = {true, false, true, false, true, false};
  string myString = "Hello World!";

  vector<string> stringVector = {"Hello World!"};
  vector<int> vectorInt = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  vector<float> vectorFloat = {1.2, 2.3, 3.4, 5.5, 6.6, 7.7, 8.8, 9.9, 10.10};
  vector<char> vectorChar = {'a', 'b', 'c', 'd', 'e'};
  vector<bool> vectorBool = {true, false, true, false, true, false};

  cout << "1 String: " << endl;
  listItems(myString);

  cout << "2 Array int: " << endl;
  listItems(arrInt);

  cout << "3 Array float: " << endl;
  listItems(arrFloat);

  cout << "4 Array char: " << endl;
  listItems(arrChar);

  cout << "5 Array bool: " << endl;
  listItems(arrBool);

  cout << "6 Vector string: " << endl;
  listItems(stringVector);

  cout << "7 Vector int: " << endl;
  listItems(vectorInt);

  cout << "8 Vector float: " << endl;
  listItems(vectorFloat);

  cout << "9 Vector char: " << endl;
  listItems(vectorChar);

  cout << "10 Vector bool: " << endl;
  listItems(vectorBool);

  return 0;
}