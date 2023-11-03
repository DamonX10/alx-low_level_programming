#include "main.h"
/**
 * print_binary - prints the binary representation of a number.
 * @n: number to be printed in binary
 *
 * Return: void
 */
int _putchar(char c);
void print_binary(unsigned long int n)
{
    unsigned long int mask;
    int flag = 0;  /* to handle leading zeroes */

    if (n == 0)  /* handle 0 explicitly */
    {
        _putchar('0');
        return;
    }

    /* set mask to most significant bit */
    mask = 1UL << ((sizeof(n) * 8) - 1);

    while (mask)
    {
        if (n & mask)
        {
            _putchar('1');
            flag = 1;
        }
        else if (flag)  /* only print '0' after the first '1' has been printed */
        {
            _putchar('0');
        }

        mask >>= 1;  /* move to next bit */
    }
}
