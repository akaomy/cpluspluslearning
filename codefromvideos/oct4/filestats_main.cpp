#include <iostream>
#include <fstream> //for files
#include <string>
#include <cctype>

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

	//files ready; start reading
	//getline does not read eoln; returns false when fail
	int nlines = 0, nchars = 0, ndigits = 0, nletters = 0, npuncts = 0;
	string line;
	while (getline(f1, line)) //raed one line at a time
	{
		//see is functions in https://cplusplus.com/reference/cctype/
		//https://www.programiz.com/cpp-programming/library-function/cctype
		nlines++;
		nchars += line.size();
		cout << line << endl;
		for (size_t i = 0; i < line.length(); i++)
		{
			int ch;
			ch = line[i];
			//ch.line.at(i);
			if (isalpha(ch))
			{
				nletters++;
			}
			else if (isdigit(ch))
			{
				ndigits++;
			}
			else if (ispunct(ch))
			{
				npuncts++;
			}
		}
	}

	cout << endl;
	cout << "nlines = " << nlines << endl;
	f2 << "nlines = " << nlines << endl;
	cout << "nchars = " << nchars << endl;
	f2 << "nchars = " << nchars << endl;
	cout << "ndigits = " << ndigits << endl;
	f2 << "ndigits = " << ndigits << endl;
	cout << "nletters = " << nletters << endl;
	f2 << "nletters = " << nletters << endl;
	cout << "npuncts = " << npuncts << endl;
	f2 << "npuncts = " << npuncts << endl;

	f1.close();
	f2.close();
	return 0;
}
