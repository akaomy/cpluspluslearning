#include <iostream>
#include <string>
#include <regex>
#include <array>
#include <cassert>


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

    std::regex pattern(R"((\d{1,2}):(\d{2}:\d{2})([AP]M))");
    std::smatch matches;

    if (!std::regex_match(s, matches, pattern)) {
        return "The string does not match the expected format. FromRegex.\n";
    }

    std::string firstPart = matches[1];
    std::string secondPart = matches[2];
    std::string thirdPart =  matches[3];


    if (thirdPart == "PM") {
        if (firstPart != "12") {
            firstPart = std::to_string(std::stoi(firstPart) + 12);
        }
    } else if (thirdPart == "AM") {
        if (firstPart == "12") {
            firstPart = "00";
        } else if (firstPart.size() == 1) {
            firstPart = "0" + firstPart;
        }
    }

        return firstPart + ":" + secondPart;
}

void test__timeConversion() {
    // test cases:
    // one digit hour, AM
    // one digit hour, PM
    // Noon
    // Midnight
    // Normal AM case
    // Invalid input

    std::string oneDigitHourAM = "1:00:00AM";
    std::string oneDigitHourPM = "1:00:00PM";
    std::string noon = "12:00:00PM";
    std::string midnight = "12:00:00AM";
    std::string normalAM = "2:00:00AM";
    std::string normalPM = "2:00:00PM";
    std::string invalidFormat = "12:00AM";

    assert(timeConversion(oneDigitHourAM) == "01:00:00");
    assert(timeConversion(oneDigitHourPM) == "13:00:00");
    assert(timeConversion(noon) == "12:00:00");
    assert(timeConversion(midnight) == "00:00:00");
    assert(timeConversion(normalAM) == "02:00:00");
    assert(timeConversion(normalPM) == "14:00:00");
    assert(timeConversion(invalidFormat) == "The string does not match the expected format. FromRegex.\n");
}


int main() {
    test__timeConversion();
  return 0;
}