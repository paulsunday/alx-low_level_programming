#include <stdio.h>
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
int a = -1, i;
for (i = 0; dest[i] != '\0'; i++)
;
do {
a++;
dest[i] = src[a];
i++;
} while (src[a] != '\0');
return (dest);
}
