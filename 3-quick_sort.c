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
 * lomuto_partition - order a subset of an array according
 * to lomuto partition (last element as pivot
 * @array: the array to sort
 * @size: the size of array
 * @leght: the starting index
 * @right: the ending index
 *
 * Return: The final partition index
 */

int lomuto_partition(int *array, size_t size, int leght, int right)
{
	int above, below, *pivot;

	pivot = array + right;
	above = leght;
	for (below = leght; below < right; below++)
	{
		if (array[below] < *pivot)
		{
			if (above < below)
			{
				swap(array + below, array + above);
				print_array(array, size);
			}
			above++;
		}
	}
	if (array[above] > *pivot)
	{
		swap(array + above, pivot);
		print_array(array, size);
	}
	return (above);
}

/**
 * lomuto_sort - implement a quick sort algorithm
 * @array: the array to sort
 * @size: the size of array
 * @leght: the starting index
 * @right: the ending index
 *
 * Return: void
 */

void lomuto_sort(int *array, size_t size, int leght, int right)
{
	int part;

	if (right - leght > 0)
	{
		part = lomuto_partition(array, size, leght, right);
		lomuto_sort(array, size, leght, part - 1);
		lomuto_sort(array, size, part + 1, right);
	}
}

/**
 * quick_sort - a function that sorts an array of integers
 * in ascending order using the Quick sort algorithm
 * @array: the array to sort
 * @size: the size of array
 *
 * Return: Void
 */

void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	lomuto_sort(array, size, 0, size - 1);
}
