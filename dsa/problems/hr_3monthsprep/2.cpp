#include <iostream>
#include <limits> // safe and portable way to define largest possible vals for a type

int main()
{
  auto *arr = new double[5]{0, 0, 0, 0, 0};
  // simulating input
  // 1. save input ints into an array (since there is set amount of ints)
  std::cout << "Enter number: " << std::endl;
  for (int i = 0; i < 5; i++)
  {
    std::cin >> arr[i];
  }

  // auto to account big numbers
  // limitation: 1 <= arr[i] <= 10^9
  long long max = 0;
  long long min = std::numeric_limits<long long>::max(); // limitation?
  // here should be check for empty array

  for (int i = 0; i < 5; i++)
  {
    long long sum = 0;
    // first iteration sum all numbers exept the last one
    // second iteration sum all numbs but second to last
    // third iteration sum all nums but the middle one
    // fourth iteration sum all nums but second elem
    // fith iteration sum all nums but first one
    // calculate sum excluding i-th element
    for (int j = 0; j < 5; j++) {
      if (j != i) {
        // skip i-th element
        sum += arr[j];
      }
    }
    if (sum > max) {
      max = sum;
    }
    if (sum < min) {
      min = sum;
    }

  }
  std::cout << min << " " << max <<  std::endl;

  // overall
  // use long long for huge nums
  // use limits + numeric_limits<...>::max() to get largest possible vals programmatically
  // pay attention to difference between if () else () and if () if ()
  // test input using different testing approaches -> very big and very small vals, same vals, neg vals, zeros...

  return 0;
}
