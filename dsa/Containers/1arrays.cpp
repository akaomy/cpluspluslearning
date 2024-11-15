#include <iostream>
#include <array>

void printCStyleArrayInfo()
{
  std::cout << "CStyle Array Info: " << std::endl;
  // c-style static arrays.
  // simplest and oldest. fixed in size.
  // allocated on stack. no bounds checking.
  // easy to convert to pointers. can't use .at()
  int arr[] = {1, 2, 3, 4, 5};

  // getting size
  int size = sizeof(arr) / sizeof(arr[0]);
  std::cout << "size of arr: " << size << std::endl;

  std::cout << "arr: " << "\t";
  for (int i = 0; i < size; i++)
  {
    std::cout << arr[i] << "\t";
  }
  std::cout << std::endl;

  // array element access and modify
  arr[2] = 30;

  // looping through
  std::cout << "arr: " << "\t";
  for (int i = 0; i < size; i++)
  {
    std::cout << arr[i] << "\t";
  }
}

void printDynamicArray()
{
  std::cout << "Dynamic Array Info: " << std::endl;

  // dynamic arrays.
  // dynamically allocated on heap. no bounds checking.
  // managed via pointers. require manual deallocation delete[]
  int *arrayPtr = new int[4]{1, 2, 3, 4};

  // size mst be tracked manually
  int size = 4;

  // array element access
  std::cout << "&arrayPtr: " << &arrayPtr << std::endl;

  for (int i = 0; i < size; i++)
  {
    std::cout << arrayPtr[i] << "\t";
  }

  delete[] arrayPtr;
}

void printCPPArray()
{
  std::cout << "C++ Array Info: " << std::endl;

  // part of c++ library
  // supports bound checking with .at() and other member functions
  // similar to c-style, but with better functionality
  std::array<int, 5> stdArray = {1, 2, 3, 4, 5};

  // getting size
  int size = stdArray.size();

  // looping through
  for (int i = 0; i < size; i++)
  {
    std::cout << stdArray[i] << "\t";
  }

  std::cout << std::endl;

  // accessing and modifying
  stdArray[0] = 10;
  stdArray.at(0) = 10;

  for (int i = 0; i < size; i++)
  {
    std::cout << stdArray[i] << "\t";
  }

  std::cout << std::endl;

  // bound checked access
  try
  {
    int val = stdArray.at(100);
  } catch (const std::out_of_range e)
  {
    std::cout << e.what() << std::endl;
  }
}

int main()
{
  printCStyleArrayInfo();
  std::cout << std::endl;
  std::cout << std::endl;
  printDynamicArray();
  std::cout << std::endl;
  std::cout << std::endl;
  printCPPArray();

  return 0;
}