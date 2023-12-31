#include "sort.h"

/**
 * selection_sort  - sorts an array using selection sort algorithm
 * @array: array to sort
 * @size: size of array
 */

void selection_sort(int *array, size_t size)
{
	unsigned int i, j, inf;
	int temp;

	for (i = 0; i < size; i++)
	{
		inf = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[inf])
			{
				inf = j;
			}
		}

		if (inf != i)
		{
			temp = array[i];
			array[i] = array[inf];
			array[inf] = temp;
			print_array(array, size);
		}
	}
}
