#include <iostream>
#include <vector>
#include <string>

int main()
{
  // dynamic array with initial vals
  // automatically manages memory, resizing as needed
  // no need to use delete[]
  std::vector<std::string> vectS (3); // have size defined for this type
  std::vector<int> vectI {1,2,};

  vectI.push_back(10);
  vectI.push_back(20);
  vectI.push_back(30);

  std::cout << "vector size: " << vectI.size() << std::endl;

  for (const auto item: vectI)
  {
    std::cout << item << "\t";
  }
  std::cout << std::endl;

  vectS[0] = "Helen";
  vectS[1] = "Tomy";
  vectS[2] = "Romulus";
  vectS.emplace_back("Star");

  std::cout << "vector2 size: " << vectS.size() << std::endl;

  for (const auto& name: vectS)
  {
    std::cout << "Name: " << name << "\t";
  }

  std::cout << " " << std::endl;
  std::cout << " " << std::endl;

  std::cout << "Front and back: " << std::endl;
  std::cout << "front: " << vectI.front() << std::endl;
  std::cout << "back: " << vectI.back() << std::endl;

  vectI.pop_back();
  vectI.insert(vectI.begin(), 100); // begin() - iterator

  std::cout << " " << std::endl;
  std::cout << "now front is: " << vectI.front() << std::endl;
  std::cout << "and back is: " << vectI.back() << std::endl;
}