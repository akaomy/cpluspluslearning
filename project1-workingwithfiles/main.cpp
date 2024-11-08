#include <fstream>
#include <iostream>

using namespace std;

void readFile()
{
  cout << "Enter the name of the file to read: " << endl;
  string fileName;
  cin >> fileName;
  fstream ist {fileName}; // what's ist?
  if (!ist) cout << ("Could not open file \"" + fileName + "\"");
};

int main() {
  // [1] Know its name
  //
  // [2] Open it (for reading)
  //
  // [3] Read in the characters
  //
  // [4] Close it (though that is typically done implicitly)


  readFile();
}