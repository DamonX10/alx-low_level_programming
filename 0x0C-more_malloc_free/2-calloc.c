#include <stdlib.h>
#include "main.h"
/**
 * *_memset - fills memoryWith a constantByte
 * @s: memoryArea toBe filled
 * @b: char toCopy
 * @n: number of times toCopy b
 *
 * Return: pointerTo the memoryArea s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
/**
 * *_calloc - allocates memoryFor an array
 * @nmemb: numberOf elements in the array
 * @size: sizeOf each element
 *
 * Return: pointerTo allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, nmemb * size);

	return (ptr);
}
