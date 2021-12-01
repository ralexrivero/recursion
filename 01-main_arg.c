#include "01-pow.h"

/**
 * main - entry point for pow passing arguments
 *
 * Return: 0 on success
 */

int main(void)
{
	float f = 0, x = 0, y = 0;

	scanf("Enter a number: %f", &x);
	scanf("Enter the power: %f", &y);

	f = _pow_recursion(x, y);
	
	printf("%f.2 ^ %f = %f.2\n", x, y, f);

return (0);
}