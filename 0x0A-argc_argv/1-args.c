#include "main.h"
#include <stdio.h>
/**
 * main- prints the number of arguments passed into it
 * @argc: number of arguments passed into the program
 * @argv: array of passed arguments
 * Return: always 0 (success)
 */
int main(int argc, char **argv)
{
(void)argv;
printf("%d\n", argc - 1);
return (0);
}
