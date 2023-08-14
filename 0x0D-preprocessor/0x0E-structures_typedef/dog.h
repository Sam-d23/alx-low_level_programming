#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - initializes a variable to tpye struct
 * @d: pointer to struct dog
 * @name: name
 * @owner: owner
 * @age: age
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
	d = malloc(sizeof(struc dog));
d->name = name;
d->age = age;
d->owner = owner;
}
