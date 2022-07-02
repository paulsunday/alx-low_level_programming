#include <stdio.h>
#include <stdlib.h>
/**
*main-Entry point of the program
*return: Always 0 (Success)
*/
int main(void)
{
int ch;
for (ch = 'a'; ch != 'e' && 'q'; ch++)
putchar(ch);
putchar('\n');
return (0);
}
