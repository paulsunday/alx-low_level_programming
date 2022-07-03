#include <stdio.h>
#include <stdlib.h>
/**
* main-Entry point of the program
* Return: Always returns zero (Success)
*/
int main(void)
{
int n, x;
for (n = 0; n <= 98; n++)
{
for (x = n++; x <= 99; x++)
putchar((n / 10) + '0');
putchar(n + '0');
putchar(' ');
putchar((x / 10) + '0');
putchar(x + '0');
putchar(' ');
if (n == 98 && x == 99)
continue;
}
putchar('\n');
return (0);
}
