#include <iostream>
#include <vector>

using namespace std;

void tokenize(const string str)
{
  // write a function that takes in a string of words.
  // for each word the function should print
  // <fist letter of the word, word>

  // pseudocode / steps:
  // create a container for word
  // go through each char
  // if it's a letter
  // put it into the container
  // if it's a space
  // put resulted word into tokens vector and
  // word.clear() to clear out word to put next word

  string word;
  vector <string> tokens;

  for (auto chr : str) {
    chr = tolower(chr);
    if (isalpha(chr))
    {
      word += chr;
    }
    else if (!word.empty())
    {
      tokens.push_back(word);
      word.clear();
    }
  }

  for (auto &token : tokens)
  {
    cout << "<" << token[0] << ":" << token << ">" << "\t";
  }
}

int main() {
  string str = R"(int main() {int x = 10; cout << "Hello, world!" << endl: endsdsds; })";
  tokenize(str);

  return 0;
}