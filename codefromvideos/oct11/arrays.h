#pragma once
//int part
void swap_objects_byvalues(int a, int b);
void swap_objects_bypointers(int* a, int* b);

void swap_objects(int& a, int& b);
void array_display(int a[], size_t size);
void array_copy(int src[], int dst[], size_t size);
void array_reverse(int a[], size_t size);
void array_min_sort(int a[], size_t size);
void array_max_sort(int a[], size_t size);
void array_bubble_sort(int a[], size_t size);
void array_insertion_sort(int a[], size_t size);
void array_bidirectional_bubble_sort(int a[], size_t size);
void array_merge_sorted(int a[], size_t a_size, int b[], size_t b_size,
	int c[], size_t c_size);
