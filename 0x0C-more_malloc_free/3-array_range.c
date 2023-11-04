#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an ordered array from min to max
 * @min: the min value
 * @max: max value
 * Return: apointer to int
 */
int *array_range(int min, int max)
{
	int *p;
	int i;
	int x;

	if (min > max)
	{
		return (NULL);
	}
	x = (max - min) + 1;
	p = malloc(x);
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < x; i++)
	{
		p[i] = min;
		min++;
	}
	return (p);
}
