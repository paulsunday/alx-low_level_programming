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
_strncat(dest, src, n);
_putchar(dest);
_putchar(src);
_putchar("\n");
return (dest);
}
