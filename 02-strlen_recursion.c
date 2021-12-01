#include "02-str.h"

/**
 * strlen_recursion - return the lenght of a string using recursion
 *
 * Return: unsigned int value with lenght of the string
 */

unsigned int strlen_recursion(char *s)
{
	if (! *(s))
		return (0);
	return (1 + strlen_recursion(s + 1));
}
