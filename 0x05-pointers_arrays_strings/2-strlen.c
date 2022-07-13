#include "main.h"
/**
 * _strlen- The function returns the lenght of a string
 * @s: String
 * Return: Always Zero
*/
int _strlen(char *s)
{
int count = 0;
while (*(s + count) != '\0')
count ++;
return (count)
}
