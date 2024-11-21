#include <iostream>

int main()
{
  // & - AND
  // | - OR
  // ^ - XOR
  // >> right shift
  // << left shift

  int x = 6;  // 00000110
  int y = 12; // 00001100
  int z = 0;  // 00000000

  z = x & y; // 00000100 = 4
  std::cout << "END operation result is: " << z << std::endl;

  z = x | y; // 00001110 = 14
  std::cout << "OR operation result is: " << z << std::endl;

  z = x ^ y; // 00001010 = 10
  std::cout << "XOR operation result is: " << z << std::endl;

  z = x >> 1; // 00000011 = 3
  std::cout << "Shift to the right by one operation result is: " << z << std::endl;

  z = x << 2; // 00011000 = 24
  std::cout << "Shift to the left by y operation result is: " << z << std::endl;

  return 0;
}