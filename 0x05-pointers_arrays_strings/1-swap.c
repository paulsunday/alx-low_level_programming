#include "main.h"
/**
* swap_int- Swaping two integers
* @a: First int
* @b: Second int
*/
void swap_int(int *a, int *b)
{
int tmp;
tmp = *a;
*a = *b;
*b = tmp;
}
