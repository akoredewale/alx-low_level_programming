#include "main.h"

/**
 * print_diagonal - prints a diagonal line
 * @n: number of \s to be printed
 **/

void print_diagonal(int n)
{
	int x, y;

	if (n <= 0)
		_putchar('\n');
	for (x = 0; x < n; x++)
	{
		for (y = 0; y < n; y++)
			_putchar(' ');

		_putchar('\\');

		_putchar('\n');
	}
}
