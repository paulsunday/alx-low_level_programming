yy#include <stdio.h>
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
char *s = dest;
while (*dest != '\0')
{
dest++;
}
while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';
return (s);
}
