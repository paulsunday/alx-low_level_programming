#include "main.h"
/**
* is_palindrome- AString that is a palindrome
* Return: Empty String
* @s: String
*/
int is_palindrome(char *s)
{
char *p;
is_palindrome(s + 1);
p = &(*s);
if (*p == *s)
{
return (1);
}
return (0);
}
