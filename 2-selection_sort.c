#include "sort.h"

/**
 * swap - a function that swap 2 integers
 * @a: first number
 * @b: second number
 *
 * Return: Void
 */

void swap(int *a, int *b)
{
	int s;

	s = *a;
	*a = *b;
	*b = s;
}

/**
 * selection_sort - a function that sorts an array of
 * integers in ascending order using the Selection sort algorithm
 * @array: the array to sort
 * @size: the size of array
 *
 * Return: Void
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j;
	int *min;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		min = array + i;
		for (j = i; j < size; j++)
		{
			if (array[j] < *min)
				min = array + j;
		}
		if (array + i != min)
		{
			swap(array + i, min);
			print_array(array, size);
		
		}
	}
}
