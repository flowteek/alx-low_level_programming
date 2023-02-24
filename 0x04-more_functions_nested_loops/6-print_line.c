#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_line - prints a line
 * @n: variable
 *
 * Return: 0
 */

void print_line(int n)
{
	int a = 0;

	while (a < n && n > 0)
	{
		putchar('_');
		a++;
	}
	putchar('\n');
}
