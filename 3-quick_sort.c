#include "sort.h"
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
    int max = size, min = 0;

    recursive_quick(array, min, max);
}


/**
* 
*/
void recursive_quick (int *array, int min, int max)
{
    int i = min, j = min, piv = array[max];

    if (!array[min] || !array[max])
        return;
    
    for (; j <= max; j++)
    {
        if (array[j] <= piv)
        {
            i++;
            swap(&array[i], &array[j]);
            print_array(array, max);
        }
    }
    
    recursive_quick(array, i + 1, max);
    recursive_quick(array, min ,i -1);
}

void swap(int *a, int *b)
{
    int tmp = *a;

    if (*a == *b)
        return;

    *a = *b;
    *b = tmp;
}