#include "sort.h"
/**
 * shell_sort -  function that sorts an array of integers in ascending
 *               order using the Shell sort algorithm, using the Knuth
 *               sequence.
 * @array: Data structure.
 * @size: Size Data structure.
 */
void shell_sort(int *array, size_t size)
{
	int gap, i, j, temp;

	for (gap = 1; gap < (int)size; gap = gap * 3 + 1)
		;
	for (gap = (gap - 1) / 3; gap > 0; gap = (gap - 1) / 3)
	{
		for (i = gap; i < (int)size; i++)
			for (j = i - gap; j >= 0 && array[j] > array[j + gap]; j -= gap)
			{
				temp = array[j];
				array[j] = array[j + gap];
				array[j + gap] = temp;
			}
		print_array(array, size);
	}
}
