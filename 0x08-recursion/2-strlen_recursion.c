#include "main.h"
/**
 * _strlen_recursion- printing the string length
 * @s: string
 * Return: Zero
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);
return (1 + _strlen_recursion(s + 1));
}
