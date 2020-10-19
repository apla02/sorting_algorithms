#include "sort.h"
/**
 * bubble_sort - sorting algorithm
 * @array: array of elements
 * @size: size of array
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
	size_t i = 0, j = 0, tmp = 0;

	if (array == NULL || size < 2)
		return;

	for (i = 0 ; i < size; i++)
	{
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
				print_array(array, size);
			}
		}
	}
}
