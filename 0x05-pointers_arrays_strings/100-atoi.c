#include "main.h"
/**
* _atoi- converts a string to int
* @s: The pointer to convert
* Return: A int
*/
int _atoi(char *s)
{
int c = 0;
unsigned int n = 0;
int min = 1;
int i = 0;
while (s[c])
{
if (s[c] == 45)
{
min *= -1;
}
while (s[c] >= 48 && s[c] <= 57)
{
i = 1;
n = (n * 10) + (s[c] - '0');
c++;
}
if (i == 1)
{
break;
}
c++;
}
n *= min;
return (n);
}
