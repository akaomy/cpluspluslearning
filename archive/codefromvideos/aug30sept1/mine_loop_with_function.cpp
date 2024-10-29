#include <iostream>
#include <vector>
using namespace std;

bool want_to_repeat()
{
	//ask the user to continue or stop
	char answer = ' ';
	while (true)
	{
		cout << "Do you want to continue (y or n)? ";
		cin >> answer;
		answer = tolower(answer);
		if (answer == 'n')
			break;
		cout << "type y or n please" << endl;
	}
	return (answer == 'y');
}

int main () {
    want_to_repeat();
}

