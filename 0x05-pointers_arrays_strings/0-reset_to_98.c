#include "main.h"
#include <stdio.h>
/**
* reset_to_98- Entry point of the program
* @n: Gets the int num
* Return: Always Zero (Success)
*/
void reset_to_98(int *n)
{
int i;
i = 98;
*n = i;
printf("%d\n", i);
return;
}
