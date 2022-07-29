#include "main.h"
/**
* _calloc- allocates mem to an array using malloc
* @nmemb: element of size
* @size: size of mem
* Return: if malloc fails it returns NULL
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int i;
char *str;
str = NULL;
if (nmemb == 0 || size == 0)
{
return (NULL);
}
str = malloc(size * nmemb);
if (str == NULL)
{
return (NULL);
}
for (i = 0; i < nmemb * size; i++)
{
str[i] = 0;
}
return (str);
}
