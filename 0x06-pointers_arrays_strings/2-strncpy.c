#include "main.h"
/**
* _strncpy- finds the length of string
* @dest: detion string
* @src: pointer
* @n: int
* Return: returns pointer to string
*/
char *_strncpy(char *dest, char *src, int n)
{
int i;
for (i = 0; i < n && *(src + i); i++)
*(dest + i) = *(src + i);
for (; i < n; i++)
*(dest + i) = '\0';
return (dest);
}
