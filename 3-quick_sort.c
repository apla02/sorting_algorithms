#include "sort.h"

/**
 * swap - swap two elements of array
 * @i: pointer to element 1
 * @j: pointer to element 2
 * Return: none
 */

void swap(int *i, int *j)
{
	int temp = *i;
	*i = *j;
	*j = temp;
}

/**
 * partition - Process where the array is organized.
 * @array: Data structure.
 * @lower: Index lower
 * @high: Index high
 * @size: size array
 * Return: Index
 */
int partition(int *array, int *lower, int *high, int size)
{
	int *Pivote = high;
	int *j = lower;
	int *i = lower;

	while (j < high)
	{
		if (*j < *Pivote)
		{
			swap(i, j);
			if (j != i)
				print_array(array, size);
			i += 1;
		}
		j += 1;
	}
	swap(i, Pivote);
	if (i != j)
		print_array(array, size);

	return (i - array);
}

/**
 * quickSort - quick sort implementation
 * @array: Data structure.
 * @lower: Index lower
 * @high: Index high
 * @size: Size Data structure.
 */

void quickSort(int *array, int *lower, int *high, int size)
{
	if (lower < high)
	{
		int Particion = partition(array, lower, high, size);

		if (Particion)
			quickSort(array, lower, array + (Particion - 1), size);
		quickSort(array, array + (Particion + 1), high, size);
	}
}
/**
 * quick_sort -  function that sorts an array of integers in ascending
 *               order using the Quick sort algorithm
 * @array: data structure that the function is applied to
 * @size: Data structure size
 */

void quick_sort(int *array, size_t size)
{
	if (!array || size < 2)
		return;

	quickSort(array, array, array + (size - 1), size);
}
