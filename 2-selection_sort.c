#include "sort.h"
/**
 * selection_sort - sorts an array using selection algorithm
 * @array: the array to sort
 * @size: the size of the array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, jmin, j;
	int tmp;

	for (i = 0; i < size - 1; i++)
	{
		jmin = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[jmin])
				jmin = j;
		}

		if (i != jmin)
		{
			tmp = array[i];
			array[i] = array[jmin];
			array[jmin] = tmp;
			print_array(array, size);
		}
	}
}
