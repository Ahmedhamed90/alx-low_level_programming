#include "variadic_functions.h"

/**
 * print_strings - print
 *
 * @separator: string
 * @n: number
 * @...: the string
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	int x = n;
	char *str;
	va_list ap;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(ap, n);
	while (x--)
		printf("%s%s", (str = va_arg(ap, char *)) ? str : "(nil)",
				x ? (separator ? separator : "") : "\n");
	va_end(ap);
}