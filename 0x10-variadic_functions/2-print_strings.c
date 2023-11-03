#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - Prints strings - followedBy a newLine.
 * @separator: String toBe printed between strings.
 * @n: numberOf strings passedTo the function.
 * @...: variable numberOf strings toBe printed.
 *
 * Description: If separator is NULL, it is notPrinted.
 *              If one ofThe strings if NULL, (nil) isPrinted instead.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *str;
	unsigned int index;

	va_start(strings, n);

	for (index = 0; index < n; index++)
	{
		str = va_arg(strings, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(strings);
}
