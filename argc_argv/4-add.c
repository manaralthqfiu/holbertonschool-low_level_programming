#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * is_digit - checks if a string contains only digits
 * @s: the string to check
 *
 * Return: 1 if all characters are digits, 0 otherwise
 */
int is_digit(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (!isdigit(s[i]))
			return (0);
		i++;
	}
	return (1);
}
/**
 * main - adds positive numbers passed as arguments
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 if success, 1 if any argument is invalid
 */
int main(int argc, char *argv[])
{
	int sum = 0, i;

	for (i = 1; i < argc; i++)
	{
		if (!is_digit(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
