#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - freesMemory allocatedFor struct dog
 * @d: struct dog toFree
 */
void free_dog(dog_t *d)
{
	if (d)
	{
	free(d->name);
	free(d->owner);
	free(d);
	}
}
