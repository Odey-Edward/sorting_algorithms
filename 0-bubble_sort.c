#include "sort.h"

void bubble_sort(int *array, size_t size)
{
	size_t i, j, tmp;
	int no_swap;

	for (i = 0; i < size; i++)
	{
		no_swap = 0;
		for (j = 0; j < (size - 1); j++)
		{
			if (array[j] > array[j + 1])
			{
				tmp = array[j + 1];
				array[j + 1] = array[j];
				array[j] = tmp;

				no_swap = 1;
				print_array(array, size);
			}
		}
		if (!no_swap)
			return;
	}
}
