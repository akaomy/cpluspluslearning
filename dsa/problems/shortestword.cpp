#include <iostream>
#include <string.h>
#include <vector>

using namespace std;

int main()
{
  // task: return length of the shortest word in given string
  // it will never be empty, and you don't need to account for different data types

  // pseudocode:
  // 1. construct vector of words
    // go through each character in the given string
    // put each character into the string word except it's punctiation until it hits white space
    // if white space - push accumulated string word into vector words
  // 2. look for shortest word in words
    // initialize the shortest_word string to the first word in the vector of words
    // go through vector of words
    // compare current word length with the shortest_word
    // if current is shorter, current becomes shortest
  string str = "Let's we're Test Fundamentals of Data Engineering.";
  vector<string> words;
  string word;

  for (auto chr : str)
  {
    if (chr == ' ')
    {
      words.push_back(word);
      word.clear(); // clear the word to start collecting the next one
    }
    else
    {
      if (!ispunct(chr))
      {
        word += chr;
      }
    }
  }
  words.push_back(word); // add last word in

  string shortestWord = words[0];
  for (auto current_word : words)
  {
    if (current_word.length() < shortestWord.length())
    {
      shortestWord = current_word;
    }
  }
  cout << "your shortest string: " << shortestWord << endl;

  return 0;
}