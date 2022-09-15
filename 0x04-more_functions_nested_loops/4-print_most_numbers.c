#include "main.h"

/**
 * Write a function that prints the numbers, from 0 to 9, followed by a new line.
 *
 * Return 0 if success
 */

void print_most_numbers(void)
{
	if (n <= 48 || n <= 57)
	{
		if (n == 50 || n == 52)
		{
			continue;
		}
		else
		{
			_putchar(n);
		}
		_putchar('\n');
	}
}
