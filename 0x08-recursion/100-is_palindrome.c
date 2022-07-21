#include "main.h"
/**
* is_palindrome- AString that is a palindrome
* Return: Empty String
* @s: String
*/
int is_palindrome(char *s)
{
int i = 0;
if (*s != 0)
{
i++;
return (i + is_palindrome(s + 1));
}
return (i);
}
