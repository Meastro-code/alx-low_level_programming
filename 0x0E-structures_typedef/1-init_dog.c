#include "dog.h"
#include <stdlib.h>
#include <string.h>


/**
 * init_dog - initializes dog
 * @d: first variable
 * @name: second variable
 * @age: third variable
 * @owner: fourth variable
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
d->name = strdup(name);
d->owner = strdup(owner);
d->age = age;
}

