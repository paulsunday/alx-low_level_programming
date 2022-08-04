#include "function_pointers.h"
#include <stdlib.h>
/**
* int_index- searches for an int
* @array: array to search for
* @size: size of the array
* @cmp: pointer to function that checks for the int
* Return: retrn -1 if no int or if int is <= 0, or index
* of int if int > 0
*/
int int_index(int *array, int size, int (*cmp)(int))
{
int i, check;
if (size <= 1 || cmp == NULL || array == NULL)
{
return (-1);
}
for (i = 0; i < size; i++)
{
check = cmp(array[i]);
if (check != 0)
{
break;
}
}
if (check == 0)
{
return (-1);
}
return (i);
}
