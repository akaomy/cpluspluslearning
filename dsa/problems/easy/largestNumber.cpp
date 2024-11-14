#include <iostream>

int getLargestNumber(const int* arr, int size)
{
  int largest = INT_MIN;
  for (auto i = 0; i < size; i++)
  {
    if (arr[i] > largest)
    {
      largest = arr[i];
    }
  }
  delete arr; // free up memory space when done using
  return largest;
}

int main() {

  int *arr = new int[6]{-100, 29, -29999, 0, 434, 3434};
  int size = 6;
  int largestNumber = getLargestNumber(arr, size);
  std::cout << largestNumber << std::endl;

  return 0;
}