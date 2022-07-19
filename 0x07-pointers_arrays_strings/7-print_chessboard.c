#include "main.h"
/**
* print_chessboard- To print chess board
* @a: array of pieces
* Return: null
*/
void print_chessboard(char (*a)[8])
{
int i = 0, j = 0;
while (i < 8)
{
i++;
if (j < 8)
{
j++;
_putchar(a[i][j]);
}
_putchar('\n');
}
}
