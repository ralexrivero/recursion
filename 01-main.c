#include "01-pow.h"

/**
 * main - entry point
 *
 * Return: 0 on success
 */

int main(void)
{
	float  f = 0, x = 0, y = 0;

	x = 2;
	y = 5;

	f = (_pow_recursion(x, y));
	printf("Result: %.1f ^ %.1f = %.1f\n", x, y, f);
	return (0);
}
