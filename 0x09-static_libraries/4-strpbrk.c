#include "main.h"
/**
* _strpbrk- Locates the first occurance in string @s...
* ... of any of the bytes in the string accept
* @s: string
* @accept: byte of the string
* Return: Null char
*/
char *_strpbrk(char *s, char *accept)
{
int j;
while (*s)
{
for (j = 0; accept[j]; j++)
{
if (*s == accept[j])
return (s);
}
s++;
}
return ('\0');
}
