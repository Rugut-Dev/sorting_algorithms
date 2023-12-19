#include "sort.h"

/**
 * quick_sort -  sorts an array of integers in ascending order using the QS alg
 * @array: array to be sorted
 * @size: size of said array
 *
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	qs_recursive(array, 0, size - 1, size);
}

/**
 * qs_recursive - recursive function for Quick Sort performance
 * @array: said array to be sorted
 * @first: starting index
 * @last: ending index
 * @size: size of said array
 *
 */
void qs_recursive(int *array, int first, int last, size_t size)
{
	if (first < last)
	{
		int pivot_index = lomuto_partition(array, first, last, size);

		qs_recursive(array, first, pivot_index - 1, size);
		qs_recursive(array, pivot_index + 1, last, size);
	}
}

/**
 * lomuto_partition - Lomuto partition for Quick Sort
 * @array: array to be partitioned
 * @first: starting index
 * @last: ending index
 * @size: size of said array
 *
 * Return: Final index of puvot after partition
 */
int lomuto_partition(int *array, int first, int last, size_t size)
{
	int pivot = array[last];
	int i = first - 1, j;

	for (j = first; j <= last - 1; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			if (i != j)
			{
				swap(&array[i], &array[j]);
				print_array(array, size);
			}
		}
	}

	if (i + 1 != last)
	{
		swap(&array[i + 1], &array[last]);
		print_array(array, size);
	}

	return (i + 1);
}

/**
 * swap - Swaps two elements in array
 * @a: pointer to first element
 * @b: pointer to second element
 *
 */
void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
