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
int len1, len2, n;
len1 = _strlen(dest);
len2 = _strlen(src);
for (n = 0; n <= len2; n++)
{
dest[len1 + n] = src[n];
_putchar(dest);
_putchar("\n");
}
return (dest);
}
