#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index.
 * @n: the number
 * @index: index starting from 0 of the bit you want to get
 *
 * Return: value of the bit at index or -1 if an error occurred
 */
int get_bit(unsigned long int n, unsigned int index)
{
    if (index >= (sizeof(n) * 8))
        return (-1);

    if ((n & (1UL << index)) != 0)
        return (1);
    else
        return (0);
}
