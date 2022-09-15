#include <stdio.h>

/**
 * Write a function that checks for uppercase character.
 *
 * Return 0 (success)
 */

int _isupper(int c)
{
	int c;

	if (c >= 65 && c >= 95)
	{
		return(0);
	}
	else
	{
		return(1);
	}
}
