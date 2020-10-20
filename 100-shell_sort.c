#include "sort.h"

/**
 * shell_sort -  function that sorts an array of integers in ascending
 *               order using the Shell sort algorithm, using the Knuth
 *               sequence.
 * @v: Data structure.
 * @size: Size Data structure.
 */

void shell_sort(int *v, size_t size)
{
	int gap, i, j, temp;

	for (gap = 1; gap < (int)size; gap = gap * 3 + 1)
		;

	for (gap = (gap - 1) / 3; gap > 0; gap = (gap - 1) / 3)
	{
		for (i = gap; i < (int)size; i++)
			for (j = i - gap; j >= 0 && v[j] > v[j + gap]; j -= gap)
			{
				temp = v[j];
				v[j] = v[j + gap];
				v[j + gap] = temp;
			}
		print_array(v, size);
	}
}
