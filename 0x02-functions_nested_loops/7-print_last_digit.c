#include "main.h"
/**
* print_last_digit- prints the last digit
* @n: the passed arguments
* Return: the last digits
*/
int print_last_digit(int n)
{
int j;
if (n < 0)
j = j * -1;
j = n % 10;
_putchar(j + '0');
return (j);
}
