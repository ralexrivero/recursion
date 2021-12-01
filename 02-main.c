#include "02-str.h"

/**
 * main - entry point for str reverse with recursion
 *
 * Return: 0 on success
 */

int main(void)
{
	char s[] = "Hello Recursion World";

	printf("String: %s", s);
	putchar('\n');
	printf("Reversed: ");
	str_reverse(s);
	putchar('\n');

return (0);
}
