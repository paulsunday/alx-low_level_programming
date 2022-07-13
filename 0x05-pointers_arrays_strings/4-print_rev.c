#include "main.h"
#include <string.h>
#include <stdio.h>
/**
* print_rev- Prints a string in reverse
* @s: String
* Return: Always Zero
*/
void print_rev(char *s)
{
int i, n;
n = 0;
while (s[n] != '\0')
n++;
for (i = n - 1; i >= 0; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
