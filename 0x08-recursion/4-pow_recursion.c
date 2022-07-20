#include "main.h"
/**
* _pow_recursion- Return the value of x raise to the power of 1
* @x: first num
* @y: Second Num
* Return: Always zero
*/
int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
else if (y == 0)
{
return (1);
}
return (x * _pow_recursion(x, y - 1));
}
