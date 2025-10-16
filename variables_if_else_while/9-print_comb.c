#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all combinations of single-digit numbers
 * separated by ", ", using only putchar and no char variables
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar(num + '0');
		if (num != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
