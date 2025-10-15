#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints the last digit of the number stored in the variable n
 * and shows whether it is greater then 5, 0, or less then 6 and not 0
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;

	printf("Last digit of %d is %d ", n, last_digit);

	if (last_digit > 5)
	{
		printf("and is greater then 5/n");
	}
	else if (last_digit == 0)
	{
		printf("and is 0/n");
	}
	else
	{
		printf("and is less then 6 and not 0/n");
	}
	return (0);
}
