#include <iostream>

int main() {
  // 2 rows 3 columns
  int myNums[2][3] {
    {1,2,3},
    {4,5,6}
  };
  int size = 3;
  int myArray[size]{1,2,3};

  // print array
  for (int i = 0; i < 3; i++) {
  std::cout << myArray[i] << " ";
  }
  std::cout << std::endl;

  // reverse this array
  for (int i = size - 1; i >= 0; i--) {
    std::cout << myArray[i] << " ";
  }

  std::cout << myNums[0][1] << std::endl;
  myNums[0][1] *= 6;
  std::cout << myNums[0][1] << std::endl;

  for (int row = 0; row < 2; row++) {
    for (int col = 0; col < 3; col++) {
      std::cout << "[ " << myNums[row][col] << " ]";
    }
    std::cout << std::endl;
  }

  std::cout << std::endl;

  // reverse the matrix
  for (int row = 1; row >= 0; row--) {
    for (int col = 2; col >= 0; col--) {
      std::cout << "[ " << myNums[row][col] << " ]";
    }
    std::cout << std::endl;
  }



  return 0;
}