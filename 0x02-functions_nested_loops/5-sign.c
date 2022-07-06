#include "main.h"
/**
* print_sign- A function that prints a sign of number
*
* @n: argument passed
* Return: always Zero (success)
*/
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
