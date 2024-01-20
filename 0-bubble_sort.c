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
 * bublle_sort - a function that sorts an array of
 * integers in ascending order using the Bubble sort algorithm
 * @array: the array to sort
 * @size: the size of array
 *
 * Return: Void
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, lenght = size;
	int B = 0;

	if (array == NULL || size < 1)
		return;

	while (B == 0)
	{
		B = 1;
		for (i = 0; i < lenght - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				swap(array + i, array + i + 1);
				print_array(array, size);
				B = 0;
			}
		}
		lenght--;
	}
}
