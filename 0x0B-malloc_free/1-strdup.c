#include "main.h"
#include <stdlib.h>
/**
* _strdup- returns a pointer to a newly allocated space
* @str: string
* Return: string
*/
char *_strdup(char *str)
{
char *cpy;
unsigned int i, len = 0;
if (str == NULL)
return (NULL);
while (str[len] != '\0')
len++;
cpy = (char *)malloc((sizeof(char) * len) + 1);
if (cpy == NULL)
return (NULL);
for (i = 0; i < len; i++)
cpy[i] = str[i];
cpy[len] = '\0';
return (cpy);
}
