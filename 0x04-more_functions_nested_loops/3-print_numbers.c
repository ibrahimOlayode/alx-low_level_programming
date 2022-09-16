#include "main.h"

/**
 * print_numbers - prints number from 0-9
 *
 * Return 0 if success
 */

void print_numbers(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
