#include "main.h"
/**
 * get_endianness - checks the endianness.
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
    union {
        unsigned int i;
        char c[sizeof(unsigned int)];
    } test = { .i = 1 };

    return (test.c[0]);
}
