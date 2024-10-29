#include <iostream>
#include <cctype>
using namespace std;

bool want_to_repeat(); //declaration; prototype; header
double fact(int n);
double factr(int n);

int main(void)
{
	cout << "Welcome to Factorial!" << endl;


	while (true)
	{
		int num = 0;
		cout << "Enter a small positive int value: ";
		cin >> num;
		if (num < 0)
			continue;
		double f = 0, fr = 0;
		cout << "Computing fact(" << num << ")" << endl;
		f = fact(num);
		cout << "fact(" << num << ") = " << f << endl;
		cout << "Computing factr(" << num << ")" << endl;
		fr = factr(num);
		cout << "factr(" << num << ") = " << fr << endl;

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


double fact(int n)
{
	double f = 1;
	//fact of 0 and 1 is 1
	//if (n <= 1)
	//	f = 1;
	for (size_t i = 2; i <= n; i++)
	{
		//f = f * i;
		f *= i;
	}
	return f;
}

double factr(int n) //recursive
{
	if (n <= 0)		//stopping of recursize
		return 1;
	return n * factr(n - 1);
}
