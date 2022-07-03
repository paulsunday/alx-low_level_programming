#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
* main- Entry point of the program
* Return: Always zero (Success)
*/
int main(void)
{
int n;
for (n = 0; n <= 9; n++)
putchar((n % 10) + '0');
putchar('\n');
return (0);
}
