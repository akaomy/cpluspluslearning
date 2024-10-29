#include <iostream>
#include <fstream> //for files
#include <string>

using namespace std;

int main(void)
{
	cout << "Welcome to filecopy!" << endl;
	ifstream f1, f2;
	ofstream f3;
	string f1name, f2name, f3name;

	cout << "Enter input file name: ";
	cin >> f1name;
	cout << "Enter input file name: ";
	cin >> f2name;
	cout << "Enter output file name: ";
	cin >> f3name;

	f1.open(f1name);
	f2.open(f2name);
	f3.open(f3name);

	if (f1.fail())
	{
		cout << "Failed to open file " << f1name;
		return 1;
	}

	if (f2.fail())
	{
		cout << "Failed to open file " << f2name;
		return 1;
	}

	if (f3.fail())
	{
		cout << "Failed to open file f3name " << f3name;
		return 1;
	}


	string line;
	while (getline(f1, line)) //raed one line at a time
	{
		f3 << line << endl;
		cout << line << endl;
	}

	while (getline(f2, line)) //raed one line at a time
	{
		f3 << line << endl;
		cout << line << endl;
	}

	return 0;
}
