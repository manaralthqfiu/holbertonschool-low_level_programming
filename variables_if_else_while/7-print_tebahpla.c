#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the lowercase alphabet in reverse using putchar only
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch;

	for (ch = 122; ch >= 97; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
