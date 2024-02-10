#include "main.h"
/**
 * factorial - returns the factorial of a given number
 * @n: the given number as an integer
 * Return: an integer as the result
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
