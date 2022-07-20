#include "main.h"
/**
* _print_rev_recursion- Prints reverse recursion
* @s: the string to be printed
* Return: the string in Reverse other
*/
void _print_rev_recursion(char *s)
{
int i;
for (i = 0; s[i] != '\0'; i++)
{
if (s[i] == 0)
{
return;
}
else
{
s[i] + (s - 1);
}
}
_putchar(*s);
_print_rev_recursion(s);
}
