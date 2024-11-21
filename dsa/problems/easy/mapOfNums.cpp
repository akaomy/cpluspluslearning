#include <array>
#include <iostream>
#include <map>
#include <vector>


std::vector<std::string> getListOfWords(std::string s)
{
  // funciton separates string into words removing special characters and white spaces

  std::vector<std::string> words;  // create vector for each word
  std::string word = "";

  for (int i = 0; i < s.length(); i++)
  {
    if (isalpha(s[i]))
    {
      word += s[i];
    }
    else
    {
      words.push_back(word);
      word.clear();
    }
  }
  return words;
}

std::vector<int> getListWordsLengths(std::vector<std::string> words)
{
  std::vector<int> wordLengths;
  for (int i = 0; i < words.size(); i++)
  {
    wordLengths.push_back(words[i].size());
  }
  return wordLengths;
}

std::map<int, int> getFrequencyOfWords(std::vector<int> lengths)
{
  std::map<int, int> resultedMap;

  for (int i = 0; i < lengths.size(); i++)
  {
    if (resultedMap.find(lengths[i]) != resultedMap.end())
    {
      resultedMap[lengths[i]] += 1;
    }
    else
    {
      resultedMap[lengths[i]] = 1;
    }
  }
  return resultedMap;
}

int main() {
  // create a function that outputs map from given string where keys are the lengths of words
  // and values are the amount of such words in the string
  // assuming that special chars, white space and numbers are ignored
  // and characters inside words are part of the words

  std::string s = "std::map<int, int> 123 getFrequenc####yOfWords(std::vec^^^tor<int> lengths)";
  std::vector<std::string> words = getListOfWords(s);
  std::vector<int> lengths = getListWordsLengths(words);
  std::map <int, int> result = getFrequencyOfWords(lengths);

  for (const auto& [key, value] : result) {
    std::cout << "word with length " << key << " appears " << value << " times.\n";
  }

  return 0;
}
