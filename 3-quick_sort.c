#include "sort.h"
#include <stdio.h>

/**
 * segragation - finds a partition using Lomuto scheme
 * @array: array to sort
 * @min: min index of a segragation
 * @max: max index of a segragation
 * @size: size of array
 * Return: index
 */
size_t segragation(int *array, ssize_t min, ssize_t max, size_t size)
{
	ssize_t i, j;
	int swap, pivot;

	pivot = array[max];
	i = min - 1;
	for (j = min; j < max; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			if (i != j)
			{
				swap = array[i];
				array[i] = array[j];
				array[j] = swap;
				print_array(array, size);
			}
		}
	}
	if (array[max] < array[i + 1])
	{
		swap = array[i + 1];
		array[i + 1] = array[max];
		array[max] = swap;
		print_array(array, size);
	}
	return (i + 1);
}

/**
 * sorting - sorts a segragation of an array
 * @array: array to sort
 * @str: min index of a segragation
 * @fn: max index of a segragation
 * @size: size of array
 */
void sorting(int *array, ssize_t str, ssize_t fn, size_t size)
{
	ssize_t pivot;

	if (str < fn)
	{
		pivot = segragation(array, str, fn, size);
		sorting(array, str, pivot - 1, size);
		sorting(array, pivot + 1, fn, size);
	}
}

/**
 * quick_sort - sorts an array of ints using quick sort algorithm
 * @array: array to sort
 * @size: size of array
 */

void quick_sort(int *array, size_t size)
{
	ssize_t pivot;

	if (array == NULL || size < 2)
		return;
	sorting(array, 0, size - 1, size);
}
