#include "main.h"
/**
* sqr- natural square root
* @n: number
* @root: The square root
* Return: should turn -1
*/
int sqr(int n, int root)
{
if ((root * root) == n)
{
return (root);
}
if (root == n / 2)
{
return (-1);
}
return (sqr(n, root + 1));
}
/**
* _sqrt_recursion - Returns natural square root of a number
* @n: number to return the square root of
*
* Return: If n has a natural square root - the natural square root of n.
* f n does not have a natural square root -1.
*/
int _sqrt_recursion(int n)
{
int root = 0;
if (n < 0)
{
return (-1);
}
if (n == 1)
{
return (1);
}
return (sqr(n, root));
}
