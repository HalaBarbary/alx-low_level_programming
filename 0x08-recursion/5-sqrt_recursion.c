#include "main.h"

/**
 * _root - a function to check the result
 * @x: checked result
 * @y: the square rooted number
 * Return: the result as an int
 */
int _root(int x, int y)
{
	if (x * x == y)
	{
		return (x);
	}
	if (x * x > y)
	{
		return (-1);
	}
	return (_root((x + 1), y));
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the given number
 * Return: the result as an int
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	return (_root(1, n));
}
