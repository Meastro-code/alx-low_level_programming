#include <stdlib.h>
#include <string.h>
/**
 * realloc - reallocates mem
 * @ptr: memory to be allocated
 * @old_size: size of mem
 * @new_size: size of mem
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size) {
void *new_ptr;
if (new_size == 0)
{
free(ptr);
return (NULL);
}
if (ptr == NULL)
{
return malloc(new_size);
}
if (new_size == old_size)
{
return (ptr);
}
new_ptr = malloc(new_size);
if (new_ptr != NULL)
{
unsigned int copy_size;
if (old_size < new_size)
{
copy_size = old_size;
}
else
{
copy_size = new_size;
memcpy(new_ptr, ptr, copy_size);
free(ptr);
}
}
return (new_ptr);
}
