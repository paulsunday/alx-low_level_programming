#include "main.h"
#include <stddef.h>
/**
* _strstr-Finds the first occurance of substring
* @haystack: String
* @needle: substring in string
* Return: null
*/
char *_strstr(char *haystack, char *needle)
{
int i = 0, j = 0;
while (haystack[i])
{
while (needle[j])
{
if (haystack[i + j] != needle[j])
{
break;
}
j++;
}
if (needle[j] == '\0')
{
return (haystack + i);
}
i++;
}
return (NULL);
}
