#include "main.h"
/**
* _realloc- reallocates a memory block using malloc and free
* @ptr: pointer to mem prev alloc
* @old_size: the size, in bytes of the alocated space for ptr
* @new_size: the new size, in bytes of the new mem  block
* Return: pointer allocates new size mem, or NULL
*/
void *_realloc(void *ptr, unsigned int old_size, unsignedint new_size)
{
char *p;
unsigned int i, n = new_size;
char *oldp = ptr;
if (ptr == NULL)
{
p = malloc(new_size);
return (p);
}
else if (new_size == 0)
{
free(ptr);
return (NULL);
}
else if (new_size == old_size)
return (ptr);
p = malloc(new_size);
if (p == NULL)
return (NULL);
if (new_size > old_size)
n = old_size;
for (i = 0; i < n; i++)
p[i] = oldp[i];
free(ptr);
return (p);
}
