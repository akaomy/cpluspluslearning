#include <iostream>

using namespace std;

int callByValue(int a, const int b) {
  a = a + b;
  return a;
}

int callByReference(int *a, const int *b)
{
  *a = *a + *b;
  return *a;
}

int callByReferenceReferenceVariable(int &a, const int &b)
{
  a = a + b;
  return a;
}

int main()
{
  int a = 3, b = 5;
  cout << "callByValue(1, 2): " << callByValue(a, b) << endl;
  cout << "a is still: " << a << endl;
  cout << "callByReference(1, 2): " << callByReference(&a, &b) << endl;
  cout << "a is now: " << a << endl;
  cout << "callByReferenceReferenceVariable(1, 2): " << callByReferenceReferenceVariable(a, b) << endl;
  cout << "then a is now: " << a << endl;

  return 0;
}