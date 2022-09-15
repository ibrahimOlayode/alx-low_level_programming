#include "main.h"

/**
 * Write a function that prints 10 times the
 * numbers, from 0 to 14, followed by a new line.
 *
 * Return 0 if success
 */

void more_numbers(void)
{
	int c, t;

	for(c = 0; c < 10; c++)
	{
		for(t = 0; t < 15; t++)
		{
			if(t >= 10)
			_putchar((t / 10) + 48);
			_putchar((t % 10) + 48);
		}
		_putchar('\n');
	}
}
