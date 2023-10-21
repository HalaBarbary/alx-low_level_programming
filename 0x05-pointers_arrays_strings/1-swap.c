#include "main.h"
/**
 * swap_int - swap 2 values
 * Description: swap the values of two integers
 * @a: first value pointer to integrs
 * @b: second value
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
