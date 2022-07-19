#include "main.h"
/**
* _memset- function fill @n bytes of memory
* area pointed to by @s with the constant byte @b
* @s: pointer to the memory area
* @b: the constant byte
* @n: byte
*
* Return: pointer to the memory s
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i = 0;
while (i < n)
{
s[i] = b;
i++;
}
return (s);
}
