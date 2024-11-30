#include <iostream>
#include <string>
#include <regex>
#include <array>

// legacy. do not use the function
std::array<std::string, 3> splitString(const std::string& str) {
    std::array <std::string, 3> words{}; // array since we have fixed size here and it's not going to change

    // to break down string into t3 parts:
    std::regex pattern(R"((\d{1,2}):(\d{2}:\d{2})([AP]M))"); // Regex pattern to match the 3 parts
    std::smatch matches; // For storing the match results

    if (std::regex_match(str, matches, pattern)) {
        words[0] = matches[1];
        words[1] = matches[2];
        words[2] =  matches[3];
    } else {
        std::cout << "The string does not match the expected format.\n";
    }
    return words;
}

std::string timeConversion(std::string s) {

    // split the string
    std::regex pattern(R"((\d{1,2}):(\d{2}:\d{2})([AP]M))");
    std::smatch matches;

    if (!std::regex_match(s, matches, pattern)) {
        return "The string does not match the expected format.\n";
    }

    std::string firstPart = matches[1];
    std::string secondPart = matches[2];
    std::string thirdPart =  matches[3];


    if (thirdPart == "PM") {
        if (firstPart != "12") {
            firstPart = std::to_string(std::stoi(firstPart) + 12);
        }
    }
    else if (thirdPart == "AM")
    {
        if (firstPart == "12")
        {
            firstPart = "00";
        }
        else if (firstPart.size() == 1)
        {
            firstPart = "0" + firstPart;
        }
    }
    else
    {
        return "The string does not match the expected format.\n";
    }
    return firstPart + ":" + secondPart;
}

int main() {
    // if firstPart = 12 and AM
    // then firstPart becomes "00"

    // if firstPart = 12 and PM
    // then don't do anything special - it just follows general rules

    // if PM
    // then switch (firstPart)
    // case "1":
    // firstPart = becomes "13"
    // and so on
    // until 12: 12 pm is 12 pm no need to replace first part

    std::string ampmTime = "12:10:40AM";
    std::string ampmTime2 = "1:35:50PM";

    std::cout << timeConversion(ampmTime) << std::endl;
    std::cout << timeConversion(ampmTime2);

  return 0;
}