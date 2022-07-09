#include <stdio.h>
/**
* main - prints prime numbers
* Return: Always 0
*/
int main(void)
{
long int x = 612852475143;
long int num;
for (num = 2; num < x; num++)
{
if (x % num == 0)
{
x = x / num;
}
}
printf("%ld\n", num);
return (0);
}
