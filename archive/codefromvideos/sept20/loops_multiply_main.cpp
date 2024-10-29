#include <iostream>

using namespace std;

bool want_to_repeat(); //declaration; prototype; header

int main(void)
{
	cout << "Welcome to loops_multiply" << endl;
	//read 3 numbers: num, first, last and create the multiplication
	//table for num from first to last.
	while (true)
	{
		int num = 0, first = 0, last = 0;
		cout << "Enter 3 integers (num, first, last): ";
		cin >> num >> first >> last; 
		cout << "Multiplication table for " << num
			<< " from " << first << " to " << last << endl;
		for (int i = first; i <= last; i++)
		{
			cout << num << " * " << i << " = " << num * i << endl;
		}

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