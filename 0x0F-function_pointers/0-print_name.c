#include "function_pointers.h"

#include <stdio.h>
/**
 * print_name - printName using pointerTo function
 * @name: stringTo add
 * @f: pointerTo function
 * Return: nothing
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
