#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending order
 * @array: array to sort
 * @size: array size
 */

void bubble_sort(int *array, size_t size)
{
	int temp, new;
	unsigned int i, n = size;

	do {
		new = 0;
		
		for (i = 1; i < n; i++)
		{
			if (array[i - 1] > array[i])
			{
				temp = array[i - 1];
				array[i - 1] = array[i];
				array[i] = temp;
				new = i;
				print_array(array, size);
			}
		}
		n = new;
	} while (n >= 1);
}
