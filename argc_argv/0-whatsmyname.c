#include <stdio.h>

/**
 * main - prints the program name
 * @argc: argument count (not used)
 * @argv: argument vector (argv[0] holds the program name)
 *
 * Return: Always 0 (Success)
 */
int main(__attribute__((unused)) int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
