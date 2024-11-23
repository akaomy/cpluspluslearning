#include <iostream>

void someFuncDefNoBody(); // linking will fail

int main() {

  someFuncDefNoBody();

  std::cout << "Done" << std::endl;

  return 0;
}