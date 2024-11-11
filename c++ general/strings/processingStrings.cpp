#include <iostream>

using namespace std;

void consecutiveInput()
{
  string first, second;
  cout << "enter two strings: ";
  cin >> first >> second;
  cout << endl;
  cout << "Your inputs: " << first << " " << second << endl;
}

void displayCharInString(string str)
{
  for (auto chr: str)
  {
    cout << chr << "\t";
  }
  cout << endl;
}

void findPunctuationInString(string str)
{
  // goes though each char in a string
  // checks if any of these chars are punctuation or a space
  // if yes it prints it out
  for (auto chr: str)
  {
    if (ispunct(chr))
    {
      cout << chr << "\t";
    }
    if (isspace(chr))
    {
      cout << "space was here" << "\t";
    }
  }
}

int main() {
  string str1 = "Hello ";   // copy initialization
  string str2 = "World !";

  consecutiveInput();
  displayCharInString(str1);
  findPunctuationInString(str2);

  return 0;
}