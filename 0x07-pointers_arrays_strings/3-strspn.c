#include "main.h"
/**
* _strspn- get the length of prefix substring
* @s: string
* @accept: byte to be saved in @s
* Return: number of bytes in segment of @s
*/
unsigned int _strspn(char *s, char *accept)
{
int i;
int j;
int newlen = 0;
for (i = 0; s[i] != '\0'; i++)
{
if (s[i] != 32)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
newlen++;
}
}
else
return (newlen);
}
return (newlen);
}
