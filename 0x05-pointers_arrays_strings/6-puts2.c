#include <string.h>
#include "main.h"
/**
* puts2- prints character of a string
* @str: parameter
* Return: Always Zero
*/
void puts2(char *str)
{
int count, i;
count = strlen(str);
for (i = 0; i < count; i += 2)
_putchar(str[i]);
_putchar('\n');
return;
}
