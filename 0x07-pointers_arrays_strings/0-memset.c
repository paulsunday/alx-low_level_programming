#include "main.h"
/**
* _memset- Set a memory with constant byte
* @s: pointer to the memory area
* @b: the constant byte
* @n: byte
*
* Return: pointer to the memory s
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
if (i < n)
{
s[i] = b;
i++;
}
return (s);
}
