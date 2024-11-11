#include <iostream>

using namespace std;

int main() {
  // will ask for a word
  // program will stop if it will detect that
  // current word is the same as previosly entered word
  int words_number = 0;
  string current_word, previous_word;
  cout << "Enter a word: ";
  while (cin >> current_word)
  {
    ++words_number;
    if (previous_word == current_word)
    {
      cout << "words_number" << words_number << "repeated: " << current_word << endl;
      break;
    }
    previous_word = current_word;
  }

  return 0;
}