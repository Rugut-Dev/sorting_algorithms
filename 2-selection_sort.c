#include "sort.h"

/**
 * selection_sort - implements the selection sort algorithm
 *
 * @array: pointer to array of integers
 * @size: size of @array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, minIndex, temp;

<<<<<<< HEAD
	for (i = 0; i < size - 1; i++)
=======
	for (i = 0; i < size; i++)
>>>>>>> testing_branch
	{
		minIndex = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[minIndex])
			{
				minIndex = j;
			}
		}

		temp = array[minIndex];
		array[minIndex] = array[i];
		array[i] = temp;
		if (minIndex != i)
			print_array(array, size);
	}
}
