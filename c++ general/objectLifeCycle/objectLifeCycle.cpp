#include <iostream>

class Entity
{
  public:
  Entity()
  {
    std::cout << "Entity created" << std::endl;
  };
  ~Entity()
  {
    std::cout << "Entity deleted" << std::endl;
  }
};
void foo()
{
  int a = 0;
  std::cout << a << std::endl;
  // entity one activates destructor only when program will reach function out of scope
  Entity one;
  Entity* two = new Entity();
  delete two;
}


int main() {
  // stack based:
  // will be initialized when it is called and executed
  // as soon as gets out of scope variable or object is getting destoyed to free up memory

  foo();
  // Entity e;

  // Heap based:
  // only created during program run. it doesn't get destroyed if it goes out of scope
  // only gets destroyed when programm stops its execution
  // Entity* s = new Entity();

  return 0;
}