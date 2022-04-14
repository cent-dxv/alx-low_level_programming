#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - print string
 * @separator: separator
 * @n: number of strings
 *
 * Description: print string separated by separator
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *str;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (separator != NULL)
		{
			if (i == n - 1)
				continue;
			printf("%s", separator);
		}
	}
	printf("\n");
}
