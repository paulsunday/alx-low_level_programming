#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
* print_diagsums- Prints the sum of two diagonal
* @a: matrix
* @size: size of matrix
*/
void print_diagsums(int *a, int size)
{
int i, j, k, l = 0, r = 0;
for (i = 0; i < size; i++)
{
k = (i * size) + i;
l += *(a + k);
}
for (j = 0; j < size; j++)
{
k = (j * size) + (size - 1 - j);
r += *(a + k);
}
printf("%i, %i\n", l, r);
}
