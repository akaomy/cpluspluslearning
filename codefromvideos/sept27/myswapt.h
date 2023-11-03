#pragma once
#include <string>

//template <class T>
template <typename T>
void myswap(T& a, T& b)
{
	T tmp = a;
	a = b;
	b = tmp;
}
