#include "main.h"
#include <string.h>
#include <stdio.h>
/**
* _strncat- Append n number of string
* @dest: Destination
* @src: Source
* @n: Number of string
* Return: Returns dest
*/
char *_strncat(char *dest, char *src, int n)
{
int len1, i;
for (len1 = 0; dest[len1] != '\0'; len1++);
for (i = 0; i < n && src[i] != '\0'; i++)
dest[len1 + 1] = src[i];
/*ending it with a end of string char*/
dest[len1 + i] = '\0';
return (dest);
}
