#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - initializes a variableOf type struct dog
 * @d: pointerTo struct dogTo initialize
 * @name: nameTo initialize
 * @age: ageTo initialize
 * @owner: ownerTo initialize
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
