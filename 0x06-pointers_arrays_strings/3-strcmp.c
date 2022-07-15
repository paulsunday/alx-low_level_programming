#include "main.h"
#include <stdio.h>
/**
* _strcmp - Compares string
* @s1: string 1
* @s2: string 2
* Return: Always Zero
*/
int _strcmp(char *s1, char *s2)
{
int n, flag = 0;
for (n = 0; s1[n] != '\0' || s2[n] != '\0'; n++)
{
if (s1[n] != s2[n])
{
flag = 1;
break;
}
}
if (flag == 0)
{
printf(" string are same %s %s\n", s1, s2);
}
return (0);
}
