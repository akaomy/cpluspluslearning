#include <algorithm>
#include <iostream>
#include <vector>
#include <unordered_map>
#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

/************************************************************
*   Given a list of integers that are in 100 elements length
*   count and return the number of times each value appears
*   as an array of integers.
 ************************************************************/

// efficient solution hashmap* for large input data:
std::vector<int> countingValues__Eff(const std::vector<int>& arr) {
  std::vector<int> output_arr(100, 0);
  std::unordered_map<int, int> frequency_map;

  // count occurences
  for (const int value : arr) {
    if (value >= 0 && value < 100) {
      frequency_map[value]++;
    }
  }

  // populate output array with frequncy map
  for (const auto& [key, count] : frequency_map) {
    output_arr[key] = count;
  }

  return output_arr;
}

// O(n^2) inefficient for large input data
std::vector<int> countingValues__NotEff(const std::vector<int>& arr) {
  std::vector<int> output_arr(100, 0);
  int counter = 0;

  for (int i = 0; i < arr.size(); i++) {
    counter = 0; // Reset counter for each new arr[i]
    for (int j = 0; j < arr.size(); j++) {
      if (arr[i] == arr[j]) {
        counter = counter + 1;
      }
    }
    output_arr[arr[i]] = counter; // Store the count in output_arr
  }
  return output_arr;
}

TEST_CASE("positive within required range") {
  std::vector<int> input_arr {63, 25, 73, 1, 98, 73, 56, 84, 86, 57, 16, 83, 8, 25, 81, 56, 9, 53, 98, 67, 99, 12, 83,
  89, 80, 91, 39, 86, 76, 85, 74, 39, 25, 90, 59, 10, 94, 32, 44, 3, 89, 30, 27, 79, 46, 96, 27, 32, 18, 21, 92, 69,
  81, 40, 40, 34, 68, 78, 24, 87, 42, 69, 23, 41, 78, 22, 6, 90, 99, 89, 50, 30, 20, 1, 43, 3, 70, 95, 33, 46, 44, 9,
  69, 48, 33, 60, 65, 16, 82, 67, 61, 32, 21, 79, 75, 75, 13, 87, 70, 33};

  std::vector<int> expected_output = {
    0, 2, 0, 2, 0, 0, 1, 0, 1, 2, 1, 0, 1, 1, 0, 0, 2, 0, 1, 0,
    1, 2, 1, 1, 1, 3, 0, 2, 0, 0, 2, 0, 3, 3, 1, 0, 0, 0, 0, 2,
    2, 1, 1, 1, 2, 0, 2, 0, 1, 0, 1, 0, 0, 1, 0, 0, 2, 1, 0, 1,
    1, 1, 0, 1, 0, 1, 0, 2, 1, 3, 2, 0, 0, 2, 1, 2, 1, 0, 2, 2,
    1, 2, 1, 2, 1, 1, 2, 2, 0, 3, 2, 1, 1, 0, 1, 1, 1, 0, 2, 2
  };

  REQUIRE(input_arr.size() == 100);
  CHECK(countingValues__Eff(input_arr) == expected_output);
}

TEST_CASE("edge case #1") {

}





