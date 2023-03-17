#include <stdlib.h>
#include "main.h"

/**
 *malloc_checked - allocates memory
 *@b: integer to be allocated the bytes
 *Return: A pointer to the allocated memory
 *but if it fails should cause normal process
 *termination with a status value of 98
 */

void *malloc_checked(unsigned int b)
{
void *p;

p = malloc(b);

if (p == 0)

exit(98);

return (p);
}
