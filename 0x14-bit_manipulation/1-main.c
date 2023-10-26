#include <stdio.h>
#include "main.h"
/**
 * main - check the full code
 *
 * Return: Always 0.
 */
void print_binary(unsigned long int n);
int main(void)
{
    print_binary(0);
    printf("\n");
    print_binary(1);
    printf("\n");
    print_binary(98);
    printf("\n");
    print_binary(1024);
    printf("\n");
    print_binary((1 << 10) + 1);
    printf("\n");
    return (0);
}
