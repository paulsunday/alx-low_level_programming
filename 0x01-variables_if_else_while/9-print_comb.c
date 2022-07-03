#include <stdio.h>
#include <stdlib.h>
/**
* main-Entry point of the program
* Return:Always zero (Success)
*/
int main(void)
{
int n;
for (n = 0; n <= 9; n++)
{
putchar(n + '0');
if (n == 9)
{
continue;
}
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
