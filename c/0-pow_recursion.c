#include "recursion.h"
/**
 * _pow_recursion - powwer of x to given y
 * 
 * @x: number base 
 * @y: number of time to multiply the base number x
 * Return: float number with power
 */
float _pow_recursion(float x, float y)
{
	if (y == 0)
		return (1);
	if (y < 0)
	return (_pow_recursion(x, y + 1) / x);

	return (_pow_recursion(x, y - 1) * x);
}
