#include "main.h"
/**
* factorial- the factorial of a number
* @n: the number
* Return: the factorial of @n
*/
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 0)
{
return (1);
}
return (n * factorial(n - 1)); /*this line gets the factorial of n*/
}
