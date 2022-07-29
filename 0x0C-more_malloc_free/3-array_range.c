#include "main.h"
/**
* array_range- creates an array of int
* @min: min len of int
* @max: max len of int
* Return: NULL if malloc fails
*/
int *array_range(int min, int max)
{
int *str;
int i;
int count;
if (min > max)
{
return (NULL);
}
count = max - min + 1;
str = malloc(sizeof(int) * count);
if (str == NULL)
{
return (NULL);
}
for (i = 0; min < max + 1; i++, min++)
{
str[i] = min;
}
return (str);
}
