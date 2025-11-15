#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - Prints numbers separated by a string
 * @separator: String to be printed between numbers (can be NULL)
 * @n: Number of integers passed to the function
 *
 * Return: Nothing (void)
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));

		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}

	va_end(args);
	printf("\n");
}
