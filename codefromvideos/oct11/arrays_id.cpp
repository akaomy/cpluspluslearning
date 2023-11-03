#include <iostream>
#include "arrays_id.h"
using namespace std;

//int part
void swap_objects_byvalues(int a, int b)
{
	int tmp = a;
	a = b;
	b = tmp;
}
void swap_objects_bypointers(int* a, int* b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

void swap_objects(int& a, int& b)
{
	int tmp = a;
	a = b;
	b = tmp;
}

void array_display(int a[], size_t size)
{
	for (size_t i = 0; i < size; i++)
	{
		cout << a[i] << ' ';
		//if (i != 0 && i % 10 == 0)
		//    cout << endl;
	}
	cout << endl;
}

void array_copy(int src[], int dst[], size_t size)
{
	for (size_t i = 0; i < size; i++)
	{
		dst[i] = src[i];
	}
}

void array_reverse(int a[], size_t size)
{
	for (size_t left = 0, right = size - 1; left < size / 2;
		left++, right--)
	{
		swap_objects(a[left], a[right]);
	}
}

void array_min_sort(int a[], size_t size)
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

void array_max_sort(int a[], size_t size)
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


void array_bubble_sort(int a[], size_t size)
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

void array_insertion_sort(int a[], size_t size)
{
	int key;
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

void array_bidirectional_bubble_sort(int a[], size_t size)
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

void array_merge_sorted(int a[], size_t a_size, int b[], size_t b_size,
	int c[], size_t c_size)
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

//double part
void swap_objects_byvalues(double a, double b)
{
	double tmp = a;
	a = b;
	b = tmp;
}
void swap_objects_bypointers(double* a, double* b)
{
	double tmp = *a;
	*a = *b;
	*b = tmp;
}

void swap_objects(double& a, double& b)
{
	double tmp = a;
	a = b;
	b = tmp;
}

void array_display(double a[], size_t size)
{
	for (size_t i = 0; i < size; i++)
	{
		cout << a[i] << ' ';
		//if (i != 0 && i % 10 == 0)
		//    cout << endl;
	}
	cout << endl;
}

void array_copy(double src[], double dst[], size_t size)
{
	for (size_t i = 0; i < size; i++)
	{
		dst[i] = src[i];
	}
}

void array_reverse(double a[], size_t size)
{
	for (size_t left = 0, right = size - 1; left < size / 2;
		left++, right--)
	{
		swap_objects(a[left], a[right]);
	}
}

void array_min_sort(double a[], size_t size)
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

void array_max_sort(double a[], size_t size)
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


void array_bubble_sort(double a[], size_t size)
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

void array_insertion_sort(double a[], size_t size)
{
	double key;
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

void array_bidirectional_bubble_sort(double a[], size_t size)
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

void array_merge_sorted(double a[], size_t a_size, double b[], size_t b_size,
	double c[], size_t c_size)
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
