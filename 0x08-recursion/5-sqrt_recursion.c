#include "main.h"
/**
* _sqrt_recursion- natural square root
* @n: number
* Return: should turn -1
*/
int _sqrt_recursion(int n)
{
int i = -1, j = 0;
if (n > 0)
j = 1 + _sqrt_recursion(n - (i + 2));
if (n < 0)
j = -1;
return (j);
}
