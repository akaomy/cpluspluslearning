#include <iostream>
#include <vector>

void printLengthOfEachWord(std::string str)
{
  std::string word;

  // print out length of each word
  for (auto chr: str)
  {
    if (isalpha(chr))
    {
      word += chr;
    }
    else if (!word.empty())
    {
      std::cout << word << ": " << word.length() << std::endl;
      word.clear();
    }
  }
}

int main() {
  std::string str = R"(class X { public: int m; int mf(int v) { int old = m; m=v; return old; some more words here }};)";
  printLengthOfEachWord(str);

  return 0;
}