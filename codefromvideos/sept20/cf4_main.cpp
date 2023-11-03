#include <iostream>
#include <cctype>
#include "cf4.h"
using namespace std;

bool want_to_repeat(); //declaration; prototype; header

int main(void)
{
	cout << "Welcome to cf4!" << endl;
	//read a temperature followed by letters C or F 
	//if C, convert to F and print
	//if F, convert to C and print

	while (true)
	{
		double temp = 0, ctemp = 0, ftemp = 0;
		char cf = ' ';
		cout << "Enter temp value followed by C or F: ";
		cin >> temp >> cf;
		cf = toupper(cf);
		if (cf == 'C')
		{
			ctemp = temp;
			ftemp = TempConvert::c2f(temp);
		}
		else if (cf == 'F')
		{
			ftemp = temp;
			ctemp = TempConvert::f2c(ftemp);
		}
		else
		{
			cout << "Wrong inpt! Type C or F after the temp value!" << endl;
		}
		cout << ctemp << char(248) << "C" << " = "
			<< ftemp << char(248) << "F" << endl;

		if (!want_to_repeat())
			break;
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
