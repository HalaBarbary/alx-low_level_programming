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
	void *p;
	unsigned int i;

	p = malloc(nmemb * size);
	if (p == NULL || nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	for (i = 0; i <= (nmemb * size); i++)
	{
		p[i] = 0;
	}
	return (p);
}
