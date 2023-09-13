#include "sort.h"
/**
* recursive_quick - the recursive function to call
*@array: the array to sort
*@min: the first value on the array
*@max: the last value of the array
*@size: the size of the array
*/
void recursive_quick(int *array, int min, int max, size_t size)
{

	if (min < max)
	{
		int i = min, j, piv = array[max];

		if (!array[min] || !array[max - 1])
			return;

		for (j = min; j < max; j++)
		{
			if (array[j] <= piv)
			{
				swap(&array[i], &array[j], i, j, array, size);
				i++;
			}
		}
			swap(&array[i], &array[max], i, j, array, size);
		recursive_quick(array, min, i - 1, size);
		recursive_quick(array, i + 1, max, size);
	}
}
/**
*swap - swaps two values
*@a: the first value to swap
*@b: the second value to swap
*@i: iterative var
*@j: iterative var
*@array: the array to swap
*@size: the size of the array
*/
void swap(int *a, int *b, int i, int j, int *array, size_t size)
{
	int tmp;

	if (*a == *b)
		return;


	tmp = *a;
	*a = *b;
	*b = tmp;

	if (i != j && array[i] != array[j])
		print_array(array, size);
}
/**
* quick_sort - sorts an array using quick sort
*
* @array: attay to sort
* @size: size of the array
*
* Return: void
*/
void quick_sort(int *array, size_t size)
{
	int max = size - 1, min = 0;

	if (!array)
		return;

	recursive_quick(array, min, max, size);
}
