#include <stdlib.h>
#include "main.h"
/**
 * *malloc_checked - allocatesMemory usingMalloc
 * @b: numberOf bytes toAllocate
 *
 * Return: pointerTo the allocatedMemory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
