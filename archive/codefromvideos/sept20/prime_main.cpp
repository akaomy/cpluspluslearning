#include <iostream>
#include <cctype>
using namespace std;

bool want_to_repeat(); //declaration; prototype; header
bool isPrime(int num);

int main(void)
{
	cout << "Welcome to prime!" << endl;

	while (true)
	{
		int num = 0;
		cout << "Enter a positive int: ";
		cin >> num;
		if (isPrime(num))
		{
			cout << num << " is prime." << endl;
		}
		else
		{
			cout << num << " is not prime." << endl;
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

bool isPrime(int n)
{
	//divides by 1 and itself only
	//2 3 5 7 11 ..
	if (n <= 1)
		return false;
	if (n == 2)
		return true;
	if (n % 2 == 0) //even number
		return false;
	//3 and up; skipping even numbers
	// i < n; do not include dividing n by itself
	//for (int i = 3; i < n; i++)
	int last = sqrt(n); //for efficiency
	for (int i = 3; i <= last; i++)
	{
		if (n % i == 0)
			return false;
	}
	return true;
}