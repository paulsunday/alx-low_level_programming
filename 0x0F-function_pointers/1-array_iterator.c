#include "function_pointers.h"
/**
* array_iterator- Executes a function on each arrayelement
* @array: points to the array
* @size: size of the array
* @action: points to the funtion to be executed on an array
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;
if (array != NULL && action != NULL)
{
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
}
