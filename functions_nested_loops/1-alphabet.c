#include "main.h"

/**
 * print_alphabet - prints the lowercase alphabet followed by a new line
 */
void print_alphabet(void)
{
	char *alphabet = "abcdefghijklmnopqrstuvwxyz\n";

	while (*alphabet)
	{
		_putchar(*alphabet);
		alphabet++;
	}
}
