#include "main.h"

/**
 * more_numbers - prints integers 0 to 14
 * 10 times
 *
 * Return: no return.
 */

void more_numbers(void)
{
	int c, t;

	for (c = 0; c < 10; c++)
	{
		for (t = 0; t < 15; t++)
		{
			if (t >= 10)
			_putchar((t / 10) + 48);
			_putchar((t % 10) + 48);
		}
		_putchar('\n');
	}
}
