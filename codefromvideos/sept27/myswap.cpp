#include <string>
using namespace std;
#include "myswap.h"

void myswap(int& a, int& b)
{
	int tmp = a;
	a = b;
	b = tmp;
}

void myswap(double& a, double& b)
{
	double tmp = a;
	a = b;
	b = tmp;
}

void myswap(char& a, char& b)
{
	char tmp = a;
	a = b;
	b = tmp;
}

void myswap(string& a, string& b)
{
	string tmp = a;
	a = b;
	b = tmp;
}