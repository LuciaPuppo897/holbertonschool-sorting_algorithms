#include "sort.h"
/**
* bubble_sort - sorts an array of integers using bubble sorting
*
* @array: array to be sorted
* @size: size of the array
*
* Return: void
*/
void bubble_sort(int *array, size_t size)
{
    int i, j, tmp;

    for (i = size - 1; i >= 0; i--)
    {
        for (j = 0; j < i; j++)
        {
            if (array[j] > array[j + 1])
            {
                tmp = array[j + 1];
                array[j + 1] = array[j];
                array[j] = tmp;
                print_array(array, size);
            }
        }
    }
}