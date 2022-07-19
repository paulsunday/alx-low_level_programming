#include <stddef.h>
#include "main.h"
/**
* _strstr-Finds the first occurance of substring
* @haystack: String
* @needle: substring in string
* Return: null
*/
char *_strstr(char *haystack, char *needle)
{
int a;
int len = 0;
int b;
for (a = 0; haystack[a] != '\0'; a++)
{
len++;
}
for (a = 0; haystack[a] != '\0'; a++)
{
if (haystack[a] == 32)
{
haystack[a]++;
for (b = 0; needle[b] != '\0'; b++)
{
if (haystack[a] == needle[b])
return (needle);
}
}
}
return (NULL);
}
