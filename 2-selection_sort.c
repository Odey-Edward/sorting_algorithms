#include "sort.h"

/**
 * selection_sort - implement the selection_sort algorithms
 * @array: an unsorted array
 * @size: the size of @array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, tmp, min;
	int swap;

	if (!array)
		return;

	for (i = 0; i < size; i++)
	{
		min = i;
		j = i;
		swap = 0;
		while (j < size)
		{
			if (array[j] < array[min])
			{
				min = j;
				swap = 1;
			}

			j++;
		}

		if (swap)
		{
			tmp = array[i];
			array[i] = array[min];
			array[min] = tmp;
			print_array(array, size);
		}

	}
}
