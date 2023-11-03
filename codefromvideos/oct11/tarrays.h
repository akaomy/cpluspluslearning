#pragma once
#include <iostream>
using namespace std;

template <typename T>
void swap_objects(T& a, T& b);
template <typename T>
void array_display(T a[], size_t size);
template <typename T>
void array_copy(T src[], T dst[], size_t size);
template <typename T>
void array_reverse(T a[], size_t size);
template <typename T>
void array_min_sort(T a[], size_t size);
template <typename T>
void array_max_sort(T a[], size_t size);
template <typename T>
void array_bubble_sort(T a[], size_t size);
template <typename T>
void array_insertion_sort(T a[], size_t size);
template <typename T>
void array_bidirectional_bubble_sort(T a[], size_t size);
template <typename T>
void array_merge_sorted(T a[], size_t a_size, T b[], size_t b_size,
	T c[], size_t c_size);

template <typename T>
void swap_objects(T& a, T& b)
{
	T tmp = a;
	a = b;
	b = tmp;
}

template <typename T>
void array_display(T a[], size_t size)
{
	for (size_t i = 0; i < size; i++)
	{
		cout << a[i] << ' ';
		//if (i != 0 && i % 10 == 0)
		//    cout << endl;
	}
	cout << endl;
}

template <typename T>
void array_copy(T src[], T dst[], size_t size)
{
	for (size_t i = 0; i < size; i++)
	{
		dst[i] = src[i];
	}
}

template <typename T>
void array_reverse(T a[], size_t size)
{
	for (size_t left = 0, right = size - 1; left < size / 2;
		left++, right--)
	{
		swap_objects(a[left], a[right]);
	}
}

template <typename T>
void array_min_sort(T a[], size_t size)
{
	size_t imin; //index of min
	for (size_t i = 0; i < size; i++)
	{
		imin = i;
		for (size_t j = i + 1; j < size; j++)
		{
			if (a[j] < a[imin])
				imin = j;
		}
		swap_objects(a[imin], a[i]);
	}
}

template <typename T>
void array_max_sort(T a[], size_t size)
{
	size_t imax; //index of max
	for (size_t i = 0; i < size; i++)
	{
		imax = i;
		for (size_t j = i + 1; j < size; j++)
		{
			if (a[j] > a[imax])
				imax = j;
		}
		swap_objects(a[imax], a[i]);
	}
}

template <typename T>
void array_bubble_sort(T a[], size_t size)
{
	size_t last = size - 1;
	bool swapping = true;
	while (swapping)
	{
		swapping = false;
		for (size_t i = 0; i < last; i++)
		{
			if (a[i + 1] < a[i])
			{
				swap_objects(a[i], a[i + 1]);
				swapping = true;
			}
		}
		last--;
	}
}

template <typename T>
void array_insertion_sort(T a[], size_t size)
{
	T key;
	for (size_t i = 1; i < size; i++)
	{
		key = a[i];
		size_t j = i - 1;
		while (j >= 0 && a[j] > key)
		{
			a[j + 1] = a[j];
			j--;
		}
		a[j + 1] = key;
	}
}

template <typename T>
void array_bidirectional_bubble_sort(T a[], size_t size)
{
	bool swapping = true;
	size_t last = size - 1;
	size_t p = 0;
	while (swapping)
	{
		swapping = false;
		for (size_t j = p; j < last; j++)
		{
			if (a[j] > a[j + 1])
			{
				swap_objects(a[j], a[j + 1]);
				swapping = true;
			}
		}
		for (size_t i = last - 1; i > p; i--)
		{
			if (a[i] < a[i - 1])
			{
				swap_objects(a[i], a[i - 1]);
			}
		}
		last--;
		p++;
	}
}

template <typename T>
void array_merge_sorted(T a[], size_t a_size, T b[], size_t b_size,
	T c[], size_t c_size)
{
	size_t ab_size = a_size + b_size;
	if (c_size < ab_size)
		return;
	size_t a_index = 0;
	size_t b_index = 0;
	size_t c_index = 0;

	while (c_index < ab_size)
	{
		if (a_index == a_size)
		{
			//A is finished first
			//add the remaining of B to C
			while (b_index < b_size)
				c[c_index++] = b[b_index++];
			break;
		}

		if (b_index == b_size)
		{
			//B is finished first
			//add the remaining of A to C
			while (a_index < a_size)
				c[c_index++] = a[a_index++];
			break;
		}

		//otherwise, compare the beginings of A & B
		if (a[a_index] <= b[b_index])
			c[c_index++] = a[a_index++];  //decrement A
		else
			c[c_index++] = b[b_index++];
	}
}
