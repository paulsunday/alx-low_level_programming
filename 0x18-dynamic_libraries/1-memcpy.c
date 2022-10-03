#include "main.h"
/**
 * _memcpy- Copies n byte from src
 * @dest: destination
 * @src: Source
 * @n: memory address
 * Return: returns Destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i = 0;
while (i < n)
{
dest[i] = src[i];
i++;
}
return (dest);
}
