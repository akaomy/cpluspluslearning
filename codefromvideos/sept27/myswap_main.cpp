#include <iostream>
using namespace std;
#include "myswap.h"

void display(int& a, int& b);
void display(double& a, double& b);
void display(char&a, char& b);
void display(string& a, string& b);

int main(void)
{
	cout << "Welcome to myswap!" << endl;
	int i1 = 10, i2 = 20;
	double d1 = 10.5, d2 = 20.5;
	char c1 = 'A', c2 = 'B';
	string s1 = "first";
	string s2 = "second";

	cout << "Before myswap:" << endl;
	display(i1, i2);
	display(d1, d2);
	display(c1, c2);
	display(s1, s2);

	//call myswap
	myswap(i1, i2);
	myswap(d1, d2);
	myswap(c1, c2);
	myswap(s1, s2);

	cout << endl;
	cout << "After myswap:" << endl;
	display(i1, i2);
	display(d1, d2);
	display(c1, c2);
	display(s1, s2);

	return 0;
}

void display(int& a, int& b)
{
	cout << "a = " << a << ", b = " << b << endl;
}

void display(double& a, double& b)
{
	cout << "a = " << a << ", b = " << b << endl;
}

void display(char& a, char& b)
{
	cout << "a = " << a << ", b = " << b << endl;
}

void display(string& a, string& b)
{
	cout << "a = " << a << ", b = " << b << endl;
}