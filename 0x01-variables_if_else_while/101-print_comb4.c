#include <stdio.h>
#include <stdlib.h>
/**
* main-Entry point of the program
* Return: Always Zero (Success)
*/
int main(void)
{
int a, b, c;
for (a = 0; a <= 9; a++)
{
for (b = 0; b <= 8; b++)
{
for (c = 0; c <= 7; c++)
{
putchar(a + '0');
putchar(b + '0');
putchar(c + '0');
if (a == 9 && b == 8 && c == 7)
continue;
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
