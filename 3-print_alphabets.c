#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	char lower[] = "abcdefghijklmnopqrstuvwxyz";
	char upper[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i = 0;
while (lower[i] != '\0')
{
	putchar(lower[i]);
	i++;
}
	i = 0;
	while (upper[i] != '\0')
{
	putchar(upper[i]);
	i++;
}
	putchar('\n');
	return (0);
}
