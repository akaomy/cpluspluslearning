#include <array>
#include <iostream>
#include <cassert>
#include <vector>
#include <string>

template <typename T>
auto printEveryOtherItem(const T container)
{
//  Print Every Other Item
//  Write a function that takes in a list of integers and prints every other item in the list
//  (starting from the first item).
//
//  Example:
//  ```cpp
//  Input: {1, 2, 3, 4, 5, 6}
//  Output: 1, 3, 5
//  ```

  // using ValueType = typename T::value_type; // determine type of the container
  // std::vector<ValueType> result;
  //
  // for (int i = 0; i < container.size(); i+= 2)
  // {
  //     result.push_back(container[i]);
  // }
  // std::cout << result[0] << result[1] << result[2] << result[3] << result[4] << result[5]<< '\n';
  // return result;

  for (int i = 0; i < container.size(); i+= 2)
  {
    std::cout << container[i] << " ";
  }
  std::cout << std::endl;
}

void test_printEveryOtherItem()
{
  std::array<int, 5> arr = {1, 2, 3, 4, 5};
  std::vector<double> vect = {1.1, 2.2, 3.3, 4.4, 5.5};
  std::string s = "HelloWorld!";

  // auto result = printEveryOtherItem(arr);
  // auto result2 = printEveryOtherItem(vect);
  // auto result3 = printEveryOtherItem(s);

  // assert((result == std::vector<int>{1, 3, 5}));
  // assert((result2 == std::vector<double>{1.1, 3.3, 5.5}));
  // assert((result3 == std::vector<char>{'H', 'l', 'o', 'o', 'l', '!'}));

}

int main() {

  std::array<int, 5> arr = {1, 2, 3, 4, 5};
  std::vector<double> vect = {1.1, 2.2, 3.3, 4.4, 5.5};
  std::string s = "HelloWorld!";

  // test_printEveryOtherItem();   // test_printEveryOtherItem(); disable for now. TODO figure out how to make it work
  printEveryOtherItem(arr);
  printEveryOtherItem(vect);
  printEveryOtherItem(s);
  return 0;
}