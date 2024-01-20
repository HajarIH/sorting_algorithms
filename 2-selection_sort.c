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

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		for (j = i; j < size; j++)
		{
			if (array[j] < array[i])
				swap(array + i, array + j);
		}
		print_array(array, size);
	}
}
