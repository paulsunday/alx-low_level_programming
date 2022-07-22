#include "main.h"
/**
* _strlen- AString that is a palindrome
* Return: Empty String
* @s: String
*/
int _strlen(char *s)
{
if (s[0] != '\0')
return (1 + _strlen(s + 1));
return (0);
}
/**
* pal_checker- check if s is palindrome.
* @s: string base address
* @i: left index
* @j: right index
* Return: 1 if s is a palindrome,
*/
int pal_checker(char *s, int i, int j)
{
if (s[i] == s[j])
if (i > j / 2)
return (1);
else
return (pal_checker(s, i + 1, j - 1));
else
return (0);
}
/**
* is_palindrome- Checks if s is palindrome
* @s: base address for string
*
* Return: 1 if n is prime
*/
int is_palindrome(char *s)
{
return (pal_checker(s, 0, _strlen(s) - 1));
}
