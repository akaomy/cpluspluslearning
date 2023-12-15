#include <iostream>
#include <string>
#include <cctype>
#include "exam2.h"
using namespace std;


// exam2.h
// Declarations; prototypes, headers
bool isValidNumber(string line);
void toNumerics(string& line);
char toDigit(char ch);
void punctsToSpaces(string& line);
void removeSpaces(string& line);
void formatNumber(string& line);
void formatNumber2(string& line);


int main () {
    cout << "Welcome to exam2" << endl;

    // read a string from the keyboard and process it
    while (true)
    {
    // code inside the loop
    string line;
    cout << "Enter a 10-11 alphanumeric number: " << endl;
    cin >> line;

    // if line is empty exit the while loop
    if (line.empty()) {
        break;
    }

    // check if it is a valid number
    if (!isValidNumber(line)) {
        cout << "You entered an invalid number" << endl;
        continue;
    }

    // convert to numeric
    toNumerics(line);
    cout << "after toNumeric: " << line << endl;

    // Puctuation to spaces
    punctsToSpaces(line);
    cout << "after puncts_to_spaces: " << line << endl;

    // Remove spaces
    removeSpaces(line);
    cout << "after remove_spaces: " << line << endl;

    formatNumber(line);
    cout << "after format_number: " << line << endl;

    }

    return 0;
}


// exam2.cpp
bool isValidNumber(string line) {
    // Check if line is a valid phone number
    // Must have 11 letters and digits if the first one is 1
    // Must have 10 letters and digits if the first one is not 1
    // Implement this function as per the provided guidelines

    // Check if line is a valid phone number
    // meaining: if phone number is 10 or 11 characters
    if (line.length() != 10 || line.length() != 11) {
        return false;
    }

    // check if the first character is 1 and  line length is 11
    if (line[0] == '1' && line.length() == 11) {
        for (char ch: line) {
            if (!isalnum(ch)) return false;
        }
    } else if (line[0] != '1' && line.length() == 10) {
        for (char ch: line) {
            if (!isalnum(ch)) return false;
            }
    }

    return true;
}

void toNumerics(string& line) {
    // Convert all letters to digits as in the phonepad
    // Use toDiit to convert each char
    // Implement this function as per the provided guidelines

    for (char& ch: line) {
        if (isalpha(ch)) {
            ch = toDigit(ch);
        }
    }
}

char toDigit(char ch) {
    // Convert char to digit using switch, isalpha, isdigit, tolower
    // Implement this function as per the provided guidelines
    ch = tolower(ch);

    if (isalpha(ch)) {
        switch (ch) {
            case 'a': case 'b': case 'c': return '2';
            case 'd': case 'e': case 'f': return '3';
            case 'g': case 'h': case 'i': return '4';
            case 'j': case 'k': case 'l': return '5';
            case 'm': case 'n': case 'o': return '6';
            case 'p': case 'q': case 'r': case 's': return '7';
            case 't': case 'u': case 'v': return '8';
            case 'w': case 'x': case 'y': case 'z': return '9';
            default: return ch;
        }
    }
    return ch;

}

void punctsToSpaces(string& line) {
    // Convert all punctuations to spaces
    // Implement this function as per the provided guidelines

    for (char& ch: line) {
        if (ispunct(ch)) ch = ' ';
    }
}

void removeSpaces(string& line) {
    // Remove spaces if possible
    // Implement this function as per the provided guidelines

    size_t position = 0;
    while ((position = line.find(' ', position)) != string::npos) {
        line.erase(position, 1);
    }
    
}

void formatNumber(string& line) {
    // Format the phone number
    // Implement this function as per the provided guidelines

    if (line.length() == 10) {
        line.insert(3, "-");
        line.insert(7, "-");
     } else if (line.length() == 11) {
        line.insert(1, "-");
        line.insert(5, "-");
        line.insert(9, "-");
    }
}

void formatNumber2(string& line) {
    // Additional formatting function if needed
    // Implement this function as per the provided guidelines

    if (line.length() == 10) {
        line.insert(0, "(");
        line.insert(4, ")");
        line.insert(5, " ");
        line.insert(9, "-");
    } else if (line.length() == 11) {
        line.insert(1, "(");
        line.insert(5, ")");
        line.insert(6, " ");
        line.insert(10, " ");
        line.insert(14, "-");
    }
}