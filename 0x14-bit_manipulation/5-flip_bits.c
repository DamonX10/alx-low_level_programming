#include "main.h"
/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another.
 * @n: first number
 * @m: second number
 *
 * Return: the number of bits needed to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
    unsigned long int xor_res = n ^ m; /* result after XOR operation */
    unsigned int count = 0;

    /* Count the number of set bits in xor_res */
    while (xor_res)
    {
        count += (xor_res & 1);
        xor_res >>= 1;
    }

    return (count);
}
