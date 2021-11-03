#include "recursion.h"
/**
 * countdown_recursion - countdown print form x to 0
 * @n: number to star the countdown
 * Return: the countdown
 */

void countdown_recursion(int n)
{
	if (n > 0)
	{
		printf("%d\n", n);
		countdown_recursion(n - 1);
	}
}
