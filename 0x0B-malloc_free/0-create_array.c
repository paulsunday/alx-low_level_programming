#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/** 
 * create_array- An array of char
 * @size: the size of char
 * @c: char
 * Return: Null or char
 */
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *str;
str = (char *)malloc(sizeof(char)* size);
if (size == 0 || str == NULL)
	return (NULL);
for (i = 0; i < size; i++)
{
	str[i] = c;
 }
	return (str);
}
