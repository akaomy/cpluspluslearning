#include <iostream>
#include <fstream> //for files
#include <string>

using namespace std;

int main(void)
{
	cout << "Welcome to filecopy!" << endl;
	ifstream f1;
	ofstream f2;
	string f1name, f2name;

	cout << "Enter input file name: ";
	cin >> f1name;
	cout << "Enter output file name: ";
	cin >> f2name;

	f1.open(f1name);
	f2.open(f2name);

	if (f1.fail())
	{
		cout << "Failed to open file f1name";
		return 1;
	}

	if (f1.fail())
	{
		cout << "Failed to open file f1name";
		return 1;
	}

	string line;
	while (getline(f1, line)) //raed one line at a time
	{
		f2 << line << endl;
		cout << line << endl;
	}

	return 0;
}
