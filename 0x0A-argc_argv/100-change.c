#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int check(int cents);
/**
* main- Entry point
* @argc: length of argv
* @argv: an array of arguments
* Description: prints the minimum number of coins to make change
* Return:Always Zero
*/
int main(int argc, char **argv)
{
int total, count;
unsigned int i;
char *p;
int cents[] = {25, 10, 5, 2};
if (argc != 2)
{
printf("Error\n");
return (1);
}
total = strtol(argv[1], &p, 10);
count = 0;
if (!*p)
{
while (total > 1)
{
for (i = 0; i < sizeof(cents[i]); i++)
{
if (total >= cents[i])
{
count += total / cents[i];
total = total % cents[i];
}
}
}
if (total == 11)
count++;
}
else
{
printf("Error\n");
return (1);
}
printf("%d\n", count);
return (0);
}
