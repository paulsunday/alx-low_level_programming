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
cpy = (char *)malloc((sizeof(char) * len) + 1);
if (str == NULL || cpy == NULL)
return (NULL);
while (str[len] != '\0')
len++;
for (i = 0; i < len; i++)
cpy[i] = str[i];
cpy[len] = '\0';
return (cpy);
}
