#include "main.h"
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* main- Entry point
* @argc: length of argv[]
* @argv: pointer to char of arguments
* Description: adds positive numbers together
* Return: always zero
*/
int main(int argc, char *argv[])
{
int i;
int num;
if (argc > 1)
{
for (i = 1; i < argc; i++)
{
if (fulldigits(argv[i]) == 0)
{
num += atoi(argv[i]);
}
else
{
printf("Error\n");
return (1);
}
}
printf("%i\n", num);
}
else
{
printf("0\n");
}
return (0);
}
/**
* fulldigits- Entry point of function
* @s: String of char
* Description: checks string for only numbers)?
* Return: Always zero success
*/
int fulldigits(char *s)
{
/*return 0 if full of digits, return 1 if not*/
unsigned int j;
for (j = 0; j < strlen(s); j++)
{
if (!isdigit(s[j]))
{
return (1);
}
}
return (0);
}
