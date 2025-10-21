#include "main.h"

/**
 * more_numbers - prints from 0 to 14 ten times
 *
 * Return: 0
*/
void more_numbers(void)
{
	int line, num;

	for (line = 0; line < 10; line++)
{
	for (num = 0; num <= 14; num++)
{
	if (num >= 10)
		_putchar('0' + num / 10);
	_putchar('0' + num % 10);
}
_putchar('\n');
}
}
