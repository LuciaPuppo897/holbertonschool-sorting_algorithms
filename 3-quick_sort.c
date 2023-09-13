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
    

    recursive_quick(array, min, max, size);
}


/**
* 
*/
void recursive_quick (int *array, int min, int max, size_t size)
{
    int i = min, j = min, piv = array[max - 1];

    if (!array[min] || !array[max - 1])
        return;
    
    for (; j < max; j++)
    {
        if (array[j] <= piv)
        {
            /*printf("---------> %d\n", piv);
            printf("Antes de swap : %d, %d\n", array[i], array[j]);
            printf("Antes de swap : %d, %d\n", i, j);
            printf("Después de swap : %d, %d\n", array[i], array[j]);
            printf("%d\n" , max);
            printf("Después de swap : %d, %d\n", i, j);*/
            swap(&array[i], &array[j]);
            i++;
            if (array[j] == piv)
                break;
        }
    }
    print_array(array, size);
    if (array[j] != array[min])
        recursive_quick(array, min ,i - 1, size);
    if (array[j] != piv)
        recursive_quick(array, i, max, size);
}

void swap(int *a, int *b)
{
    int tmp;

    if (*a == *b)
        return;

    tmp = *a;
    *a = *b;
    *b = tmp;
}