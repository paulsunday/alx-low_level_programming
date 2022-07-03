#include <stdio.h>
#include <stdio.h>
/**
*main-Entry point of the program
*Return:Always zero (Success)
*/
int main(void)
{
int n, x;
for (n = 0; n <= 9; n++)
{
for (x = n + 1; x <= 9; x++)
{
putchar(n + '0');
putchar(x + '0');
if ((n == 9) && x == 9)
continue;
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
