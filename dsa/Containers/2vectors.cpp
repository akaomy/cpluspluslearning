#include <iostream>
#include <vector>

int main()
{
  // dynamic array with initial vals
  // automatically manages memory, resizing as needed
  // no need to use delete[]
  std::vector<int> vctr = { 1, 2, 3, 4, 5};

  // operations:
  vctr.push_back(1);
  std::cout << vctr[6] << std::endl;
}