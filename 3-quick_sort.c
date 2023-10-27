#include "sort.h"

void swap_ints(int *a, int *b);
int lomuto_partition(int *array, size_t size, int left, int right);
void lomuto_sort(int *array, size_t size, int left, int right);
void quick_sort(int *array, size_t size);

/**
 * swap_ints - Swap two integers in an array.
 * @a: The first integer to swap.
 * @b: The second integer to swap.
 */
void swap_ints(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

