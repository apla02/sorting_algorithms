#include "sort.h"
void swap(int *element1, int *element2);
/**
 * selection_sort - sorting algorithm of insertion
 * @array: pointer to array of elements
 * @size: size of array
 * Return: node
 */
void selection_sort(int *array, size_t size)
{
	size_t i = 0, j = 0;

	if (array == NULL || size < 2)
		return;

	for (i = 0 ; i < size - 1; i++)
	{
		int min = i;

		for (j = i + 1; j < size ; j++)
		{
			if (array[j] < array[min])
			{
				min = j;
			}
		}
		swap(&array[min], &array[i]);
		print_array(array, size);
	}
}
/**
 * swap - swap two elements of array
 * @element1: pointer to element 1
 * @element2: pointer to element 2
 * Return: none
 */
void swap(int *element1, int *element2)
{
	int tmp;

	tmp = *element1;
	*element1 = *element2;
	*element2 = tmp;
}
