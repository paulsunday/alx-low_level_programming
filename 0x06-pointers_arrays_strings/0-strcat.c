#include <string.h>
#include <stdlib.h>
#include "main.h"
/**
* _strcat- A function that concantate string
* @dest: destination file
* @src: Is the source file
* Return: Returns dest
*/
char *_strcat(char *dest, char *src)
{
int l1, l2, n;
l1 = _strlen(dest);
l2 = _strlen(src);
for (n = 0; n <= l2; n++)
{
dest[l1 + 1] = src[n];
_putchar(dest);
_putchar(src);
_putchar("\n");
}
return (dest);
}
