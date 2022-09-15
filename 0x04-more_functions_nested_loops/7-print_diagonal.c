#include "main.h"

/**
 * Write a function that draws a diagonal line on the terminal
 *
 * Return 0 if success
*/

void print_diagonal(int n)
{
	int x, y;

	for (x = 0; x < n; x++)
	{
		for (y = 0; y < x; y++)
		{
			_putchar(' ');
		}
		_putchar(92);
		if (x < (n - 1))
			_putchar('\n');

	}
	_putchar('\n');
}
