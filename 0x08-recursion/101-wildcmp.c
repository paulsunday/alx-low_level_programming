#include "main.h"
/**
* wildcmp- Compares two strings
* @s1: First string to be comared
* @s2: Second String to be compared
*
* Return: 1 if identical else 0
*/
int wildcmp(char *s1, char *s2)
{
if (!*s1 && !*s2)
return (1);
if (*s1 == *s2)
return (wildcmp(s1 + 1, s2 + 1));
if (*s2 == '*' && (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2)))
return (1);
if (*s2 == '*' && *(s1 + 1) && *s2)
return (0);
return (0);
}
