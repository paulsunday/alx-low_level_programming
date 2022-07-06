#include "main.h"
/**
* _isalpha- Checks for alphabetic character
* @c: a character to be checked on
* Return: Always Zero (Success)
*/
int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
