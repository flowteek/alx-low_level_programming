#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main - data entry point
 *
 *Description: storing variables with different values
 *
 *Return: is zero (successful)
 */
int main(void)
{
	int n;
	int last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	last= n % 10;

	if (last > 5)
	{
		printf("last digit of %d is %d and  greater than 5\n", n, last);
	}
	else if (last == 0)
	{
		printf("last digit of %d is %d and is 0\n", n, last);
	}
	else if (last < 6 && last != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last);
	}
	return (0);
}
