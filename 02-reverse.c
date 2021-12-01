#include "02-str.h"

/**
 * str_reverse - print string in reverse order with recursion
 * @s: the string to reverse
 *
 * Return: 0 on success
 */

void str_reverse(char *s)
{

	if (*s)
	{
		str_reverse(s + 1);
		putchar(*s);
	}
}
