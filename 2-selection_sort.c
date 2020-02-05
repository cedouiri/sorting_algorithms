#include <stdio.h>
#include <stdlib.h>
#include "sort.h"
/**
* selection_sort - a function that sorts an array of integers in ascending
* order using the selection sort algorithm
* @array: array of integers
* @size: size of array
*/
void selection_sort(int *array, size_t size)
{
size_t j, i, min;
int temp;
for (j = 0; j < size - 1; j++)
{
min = j;
for (i = j + 1; i < size; i++)
{
if (array[i] < array[min])
{
min = i;
}
}
temp = array[j];
array[j] = array[min];
array[min] = temp;
print_array(array, size);
}
}
