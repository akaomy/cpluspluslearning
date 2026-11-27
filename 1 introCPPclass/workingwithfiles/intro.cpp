#include <iostream>
#include <fstream>
using namespace std;

// to compile
//  gcc filename.cpp -lstdc++
// to run
// ./a.out

int main () {
    ofstream myfile;
    // myfile.open("Exploring Public Speaking 4th Edition.pdf");
    myfile.open("text.txt");
    myfile << "Writing this line to text file.\n";
    myfile.close();

    return 0;
}