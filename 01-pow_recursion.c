#include "01-pow.h"

/**
 * _pow_recursion - elevates a number to the power of
 * other number with recursion
 *
 * @x: number to elevate
 * @y: the power
 * Return: float number
 */

float _pow_recursion(float x, float y)
{
	if (y == 0)
	return (1);
	if (y < 0)
	return (_pow_recursion(x, y + 1) / x);

	return (_pow_recursion(x, y - 1) * x);
}
