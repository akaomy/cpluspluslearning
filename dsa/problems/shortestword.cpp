#include <iostream>

using namespace std;

int main()
{
  // char str[] = "Fundamentals of Data Engineering.";
  // using no built-in function
  // to separate string into words

  char word[] = " ";
  word[0] = 'a';
  word[1] = 'b';
  word[2] = 'c';
  cout << word[0] << word[1] << word[2] << endl;
  // for (int i = 0; i < 34; i++)
  // {
  //   if (str[i] == ' ')
  //   {
  //     // str[i] = ',';
  //     word = word + str[i];
  //   }
  //   cout << word << endl;
  // }
  return 0;
}