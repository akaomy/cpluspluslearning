#include <iostream>
#include <vector>
#include <cassert>


int combinations(std::vector<int> items) {
  int total = 1;
  for (int i = 0; i < items.size(); i++)
  {
    // ignore 0 if it's in the list
    if (items[i] != 0)
      total *= items[i];
  }
  return total;
}

void test_combinations()
{
  std::vector<int> items = {2, 3};
  std::vector<int> items2 = {3, 7, 4};
  std::vector<int> items3 = {2, 3, 4, 5};
  std::vector<int> items4 = {6, 7, 0};


  auto res1 = combinations(items);
  assert(res1 == 6);

  auto res2 = combinations(items2);
  assert(res2 == 84);

  auto res3 = combinations(items3);
  assert(res3 == 120);

  auto res4 = combinations(items4);
  assert(res4 == 42);
}

int main()
{
  test_combinations();

  return 0;
}