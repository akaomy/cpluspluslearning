#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main () {   
    string line;
    ifstream myfile("text.txt"); // Open the file for reading
    if (myfile.is_open())
    {
        while (getline(myfile, line))
        {
            cout << line << '\n';
        }
        myfile.close();
    }
    else
    {
        cout << "Unable to open file";
        return 1; // Exit with an error code
    }

    // Open the same file for writing (append mode)
    ofstream outfile("text.txt", ios::app);

    if (outfile.is_open())
    {
        outfile << "This is a new line." << '\n'; // Write a new line to the file
        outfile.close();
        cout << "New line has been added to the file." << endl;
    }
    else
    {
        cout << "Unable to open file for writing";
        return 1; // Exit with an error code
    }

    return 0;
}
