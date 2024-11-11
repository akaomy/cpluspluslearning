#include <iostream>

using namespace std;

void consecutiveInput(string first, string second)
{
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

  consecutiveInput(str1, str2);
  displayCharInString(str1);
  findPunctuationInString(str2);

}