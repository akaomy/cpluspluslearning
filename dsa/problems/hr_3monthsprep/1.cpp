#include <iostream>
#include <vector>
//#include <format> // for c++ 20
#include <iomanip>

void plusMinus(const std::vector<int> &arr) {
  float positive = 0.0;
  float negative = 0.0;
  float zero = 0.0;

  for (int i = 0; i < arr.size(); i++)
  {
    if (arr[i] == 0)
    {
      zero += 1;
    }
    else if (arr[i] > 0)
    {
      positive += 1;
    }
    else
    {
      negative += 1;
    }
  }

//  std::cout << format("{:.6f}", positive / arrLength) << std::endl;
//  std::cout << format("{:.6f}", negative / arrLength) << std::endl;
//  std::cout << format("{:.6f}", zero / arrLength) << std::endl;
  std::setprecision(6);
  std::cout << positive / arr.size() << std::endl;
  std::cout << negative / arr.size() << std::endl;
  std::cout << zero / arr.size() << std::endl;

}

int main() {

  std::vector<int> arr{1, 0, -3, -3, 5, 0};
  plusMinus(arr);

  return 0;
}