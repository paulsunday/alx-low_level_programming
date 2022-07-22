#include <stdio.h>
#include "main.h"
/**
* main- prints name of program
* @argc: number of command line arg
* @argv: array containing program arguments
* Return: Always returns Zero
*/
int main(int argc, char **argv)
{
(void)argc;
printf("%s\n", argv[0]);
return (0);
}
