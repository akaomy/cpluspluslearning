#include <iostream>

using namespace std;

int main() {
  string str;                     // string declaration
  string str2 = str;              // str2 is a copy of str1
  string str3 = "Hello World!";   // copy initialization
  string str4(10, 'c');       // direct initialization
  string str5("Hi");            // direct initialization

  // operations on strings
  cout << "\"Hello World!\".size(): " << str3.size() << endl; // has type string::size_type - unsigned type
  cout << "check if str3 empty: " << str3.empty() << endl; // 1 true; 0 false
  cout << "get specific letter of a string str3[3]: " << str3[3] << endl;
  cout << "string concatenation: str5 + \" \" + str3: " << str5 + ". " + str3 << endl;
  cout << "compare strings: " << endl;
  cout << "(str5 == str3): " << (str5 == str3) << endl; // 1 true; 0 false
  cout << "(str5 != str3): " << (str5 != str3) << endl; // 1 true; 0 false
  cout << "(str5 > str3): " << (str5 > str3) << endl; // 1 true; 0 false
  cout << "(str5 < str3): " << (str5 < str3) << endl; // 1 true; 0 false

  // processing strings
  // use range for preferrably
  for (auto chr : str3) // for every char in str3
  {
    cout << chr << " ";
  }
  cout << endl;

  // find punctuation in a string for iteration
  for (auto chr : str3)
  {
    if(ispunct(chr))
    {
      cout << chr << " ";
    }
  }
  cout << "other cc type functions. work with individual characters: " << endl;
  cout << "isupper(str3[0]): " << isupper(str3[0]) << endl; // 1 true if its upper; 0 false if its lower
  cout << "islower(str3[0]): " << islower(str3[0]) << endl;
  cout << "isspace(str3[0]): " << isspace(str3[0]) << endl;

  cout << "isalnum(str3[0]) - letter or digit: " << isalnum(str3[0]) << endl;
  cout << "isalpha(str3[0]) - is letter: " << isalnum(str3[0]) << endl;
  cout << "isdigit(str3[0]) - is digit: " << isdigit(str3[0]) << endl;
  cout << "isxdigit(str3[0]) - is hex digit: " << isxdigit(str3[0]) << endl; // todo: learn more on it
  cout << "iscntrl(str3[0]) - is control char (?) : " << iscntrl(str3[0]) << endl; // todo: learn more on it
  cout << "isgraph(str3[0]) - is not space, but can be visually represented : " << isgraph(str3[0]) << endl;
  cout << "isprint(str3[0]) - is printable: " << isprint(str3[0]) << endl; // todo: learn more on it
  cout << "ispunct(str3[0]) - if it's punctuation: " << ispunct(str3[0]) << endl;
  cout << "tolower(str3[0]) - returns lower cased equivalent: " << tolower(str3[0]) << endl; // binary
  cout << "toupper(str3[0]) - returns upper cased equivalent: " << toupper(str3[0]) << endl; // binary

}