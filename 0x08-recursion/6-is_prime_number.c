#include "main.h"
/**
* is_prime_number- Returns 1 if the input int is a primenumber
* @n: Number
* Return: Always zero
*/
int is_prime_number(int n)
{
int i = 1, j;
if (i == n)
return (0);
else
if (n == 0)
return (1);
else
is_prime_number(n % (i + 1));
return (j);
}
