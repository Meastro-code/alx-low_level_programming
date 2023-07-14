#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
/**
 * malloc_checked - returns the memory address
 * @b: paremeter to be returned
 */
void *malloc_checked(unsigned int b)
{
void *p;
p = malloc(b);
if (p == NULL)
{
exit(98);
}
return (p);
}
