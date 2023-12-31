#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array initialized with zero
 * @nmemb: number of elements
 * @size: size of each element
 * Return: a pointer to the allocated memory block
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i;
	unsigned int x;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	x = nmemb * size;
	p = malloc(x);
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < x; i++)
	{
		p[i] = 0;
	}
	return (p);
}
