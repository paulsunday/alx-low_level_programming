#include <stdio.h>
#include <stdlib.h>
/**
* main-Entry point of the program
* Return: Always Zero (Success)
*/
int main(void)
{
int a, b, c;
for (a = 0; a < 8; a++)
{
for (b = a++; b < 9; b++)
{
for (c = b++; c < 10; c++)
{
putchar(a + '0');
putchar(b + '0');
putchar(c + '0');
if (a == 7 && b == 8 && c == 9)
continue;
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
