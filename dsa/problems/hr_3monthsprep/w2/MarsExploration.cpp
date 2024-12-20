#include <iostream>
#include <string>
#include <vector>
#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

/******************************************************************************
*   Letters in some of the SOS messages are altered by cosmic radiation during
*   transmission. Given the signal received by Earth as a string, determine
*   how many letters of the SOS message have been changed by radiation.
*   countChangedChar function has the following parameter(s):
*   string s: the string as received on Earth
*   int: the number of letters changed during transmission
*   constrains:
*   string will contain only uppercase English letters, ascii[A-Z]
*   max 1 <= string.size() <= 99
 ******************************************************************************/
std::vector<std::string> splitStr(std::string str) {
  std::vector <std::string> strChunks;

  if (str.size() < 3)
    throw std::invalid_argument("string size is less than 3");

  for (int i = 0; i < str.length(); i += 3) {

    if (!isalpha(str[i])) {
      throw std::invalid_argument("invalid input string");
    }

    strChunks.push_back(str.substr(i, 3));
  }
  return strChunks;
}

// efficiency O(n)
int countChangedChar(std::vector<std::string> strChunks) {
  int count = 0;
  for (int i = 0; i < strChunks.size(); i++) {

    if (strChunks[i][0] != 'S') {
      count++;
    }
    if (strChunks[i][1] != 'O') {
      count++;
    }
    if (strChunks[i][2] != 'S') {
      count++;
    }
  }
  return count;
}

TEST_CASE("positive") {
   std::string inputStr("OOSDSSOSOSWEWSOSOSOSOSOSOSSSSOSOSOSS");

   CHECK(countChangedChar(splitStr(inputStr)) == 20);
}

TEST_CASE("edge case #1: less than 3 characters in input string") {
  std::string inputStr("SO");

  CHECK_THROWS_AS(countChangedChar(splitStr(inputStr)), std::invalid_argument);
}

TEST_CASE("edge case #2: input string contains only spaces and special chars") {
  std::string inputStr("  *");

  CHECK_THROWS_AS(countChangedChar(splitStr(inputStr)), std::invalid_argument);
}

