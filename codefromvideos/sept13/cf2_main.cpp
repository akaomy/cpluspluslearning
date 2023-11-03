#include <iostream>
#include <cctype>
using namespace std;

bool want_to_repeat(); //declaration; prototype; header
double c2f(double c);
double f2c(double f);

int main(void)
{
	cout << "Welcome to cf2!" << endl;
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
			ftemp = c2f(temp);	//function call
		}
		else if (cf == 'F')
		{
			ftemp = temp;
			ctemp = f2c(ftemp);
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

double c2f(double c)
{
	double f = c * 9 / 5 + 32;
	return f;
}

double f2c(double f)
{
	double c = (f - 32) * 5 / 9;
	return c;
}

