#include "recursion.h"
/**
 * main - entry point to test countdown recursion
 * @argc: argument count 
 * @argv: argument vector 
 * Return: integer value with the countdown 
 */
int main(int argc, char *argv[])
{
	int x = 0;

	if (argc != 2)
	{
		printf("Enter a single integer value\n");
		return (1);
	}

	x = atoi(*(argv + 1));
	countdown_recursion(x);

	return (0);
}