#include "sort.h"

/**
 * bubble_sort - implements the bubble sort algorithm
 *
 * @array: pointer to an array of integers
 * @size: size of @array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int temp, swap = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
				swap = 1;
			}
		}
		if (swap == 0)
		{
			return;
		}
	}
}
