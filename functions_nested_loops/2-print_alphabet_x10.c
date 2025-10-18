#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times
 *
 * Description: Uses _putchar only twice
 */
void print_alphabet_x10(void)
{
	char *alphabet = "abcdefghijklmnopqrstuvwxyz\n";
	int i = 0;

	while (i < 10)
	{
		char *ptr = alphabet;

		while (*ptr)
		{
			_putchar(*ptr);
			ptr++;
		}
		i++;
	}
}
