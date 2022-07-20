#include "main.h"
/**
* _print_rev_recursion- Prints reverse recursion
* @s: the string to be printed
* Return: the string in Reverse other
*/
void _print_rev_recursion(char *s)
{
if (*s == '\0')
{
return;
_print_rev_recursion(s + 1);
_putchar(*s)
}
}
