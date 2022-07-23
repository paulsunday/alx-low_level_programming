#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* main - Entry point
* @argc: length of argv[]
* @argv: pointer to char of arguments
* Description: multiplies two numbers)?
* Return: 0 (SUCCESS)
*/
int main(int argc, char *argv[])
{
if (argc < 3 || argc > 3)
{
printf("Error\n");
return (1);
}
else
{
int num = atoi(argv[1]) * atoi(argv[2]);
printf("%i\n", num);
}
return (0);
}
