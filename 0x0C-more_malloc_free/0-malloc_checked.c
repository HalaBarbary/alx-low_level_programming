#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocate memory using malloc
 * @b: unsigned int
 * Return: a pointer to the allocated memory block
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *p;

	p = malloc(b);
	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
