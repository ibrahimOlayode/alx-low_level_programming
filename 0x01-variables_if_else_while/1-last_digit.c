#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - check ir the random number is positive or negative
 * Return: 0 if error
*/
int main(void)
{
	int n;
	int nLast;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	nLast = n % 10;

	if (nLast > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, nLast);
	else if (nLast == 0)
		printf("Last digit of %d and %d and is less than 6 and 0\n", n, nLast);
	else
		printf("Last digit of %d is %d and is 0\n", n, nLast);

	return (0);
}
