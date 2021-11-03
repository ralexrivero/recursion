#include "recursion.h"
/**
 * main - entry point for pass argument power
 * @argc: number of arguments passed
 * @argv: vector of arguments
 * Return: float number with power of arguments 1 and 2
 */
int main(int argc, char *argv[])
{
	float x = 0, y = 0, res = 0;;
	if (argc != 3)
	{
		printf("Enter two values\n");
		return (1);
	}
	x = atof(*(argv + 1));
	y = atof(*(argv + 2));

	res = _pow_recursion(x, y);
	printf("%f\n", res);

	return (0);
}