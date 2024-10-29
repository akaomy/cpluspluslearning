#include <iostream>
using namespace std;

bool want_to_repeat(); //declaration; prototype; header

int main(void)
{
	cout << "Welcome to loops_ascii!" << endl;
	
	while (true)
	{
		char ch = ' ';
		cout << "Enter a char: ";
		cin >> ch;
		cout << "Ascii value of " << ch << " = " << 
			int(ch) << endl; //casting a char to int

		if (!want_to_repeat())
			break;
	}

	//one-column ascii table
	int first = 32, last = 126;
	cout << "char \t ASCII \t Hex" << endl;
	cout << "==== \t ===== \t ===" << endl;
	for (int i = first; i <= last; i++)
	{
		cout << char(i) << " \t " 
			<< dec << i << " \t "
			<< hex << i << " \t "
			<< endl; //cast int to char
	}

	//two-column ascii table
	cout << endl;
	cout << "char \t ASCII \t Hex \t "
		"char \t ASCII \t Hex" << endl;
	cout << "==== \t ===== \t === \t "
		"==== \t ===== \t ===" << endl;
	int mid = (last + 1) / 2;
	for (int i = first; i <= mid; i++)
	{
		cout << char(i) << " \t "
			<< dec << i << " \t "
			<< hex << i << " \t ";

		cout << char(i + mid) << " \t "
			<< dec << i + mid << " \t "
			<< hex << i + mid;
		cout << endl; //cast int to char
	}

	return 0;
}

//definition; body
bool want_to_repeat()
{
	//ask the user to continue or stop
	char answer = ' ';
	while (true)
	{
		cout << "Do you want to continue (y or n)? ";
		cin >> answer;
		answer = tolower(answer);
		if (answer == 'y' || answer == 'n')
			break;
		cout << "type y or n please" << endl;
	}
	return (answer == 'y');
}