#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point of the program.
 *
 * This program generates a random number, assigns it to variable n,
 * and determines whether the number is positive or negative.
 *
 * Return: Always 0 (success).
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}
	return (0);
}
