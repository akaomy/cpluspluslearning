#include <iostream>
using namespace std;
#include "myswapt.h"

//template <class T>
template <typename T>
void display(T & a, T& b);

int main(void)
{
	cout << "Welcome to myswap!" << endl;
	int i1 = 10, i2 = 20;
	double d1 = 10.5, d2 = 20.5;
	char c1 = 'A', c2 = 'B';
	string s1 = "first";
	string s2 = "second";

	cout << "Before myswap:" << endl;
	//display<int>(i1, i2);
	//display<double>(d1, d2);
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

template <class T>
void display(T& a, T& b)
{
	cout << "a = " << a << ", b = " << b << endl;
}
