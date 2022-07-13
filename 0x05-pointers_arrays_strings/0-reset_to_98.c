#include "main.h"
#include <stdio.h>
/**
* main- Entry point of the program
* Return: Always Zero (Success)
*/
void reset_to_98(int *n)
{
int i;
i = 98;
*n = i;
printf("i=%d\n", i);
return;
}
