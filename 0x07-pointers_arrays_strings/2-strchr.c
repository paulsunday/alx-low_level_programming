#include "main.h"
/**
 * _strchr- return a pointer to char or NULL
 * @s: string
 * @c: char in string
 * Return: A pointer
 */
char *_strchr(char *s, char c)
{
while (*s)
{
if (*s != c)
s++;
else
return (s);
}
if (c == '\0')
return (s);
return (NULL);
}
