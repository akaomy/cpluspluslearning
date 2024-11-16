#include <iostream>
#include <cassert>
#include <array>


std::array<int, 2> listOfItems(const std::array<int, 6>& items){
// Given a list of numbers, return a list of 2 items where the first element is the number of positive numbers
// (how many there are) and the second element is the sum of all the negative numbers.
  std::array<int, 2> counts;;
  int posCount = 0, negCount = 0;
  for (auto i : items){
    if (i > 0)
    {
      posCount++;
    }
    else if (i < 0)
    {
      negCount++;
    }
  }
  counts[0] = posCount;
  counts[1] = negCount;

  return counts;
}

void test_listOfItems(){
  std::array<int, 6> arr = {1, 20, -33, 44, 0, -66};
  std::array<int, 6> arr2 = {1, 20, 33, 44, 0, 66};
  std::array<int, 6> arr3 = {-1, -20, -33, -44, 0, -66};
  std::array<int, 6> arr4 = {1, 20, 33, 44, -0, 66};

  auto result = listOfItems(arr);
  assert(result[0] == 3 & result[1] == 2);

  auto result2 = listOfItems(arr2);
  assert(result2[0] == 5 & result2[1] == 0);

  auto result3 = listOfItems(arr3);
  assert(result3[0] == 0 & result3[1] == 5);

  auto result4 = listOfItems(arr4);
  assert(result4[0] == 5 & result4[1] == 0);
}

int main(){
  test_listOfItems();

  return 0;
}