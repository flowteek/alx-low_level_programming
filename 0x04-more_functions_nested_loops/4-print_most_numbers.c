#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_most_numbers - prints 0 - 9 except 2, 3
 * Description: prints
 * Return: void
 */

void print_most_numbers(void)
{
	int a = 0;

	while (a <= 9)
	{
		if (a != 2 && a != 4)
		{
			putchar(a + '0');
		}
		a++;
	}
	putchar('\n');
}
