#include <stdio.h>
#include <stdlib.h>
/**
* main- Is the entry point of the program
* Return:Is always Zero (Success)
*/
int main(void)
{
char ch;
for (ch = 'z'; ch >= 'a'; ch--)
putchar(ch);
putchar('\n');
return (0);
}
