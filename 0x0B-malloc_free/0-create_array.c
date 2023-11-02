#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array with the given size
 * @size: unsigned int for size
 * @c: character to intialize with
 * Return: a pointer to the allocated memory or Null if size =0
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *a = malloc(size);

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			a[i] = c;
		}
	}
	if (a == NULL || size == 0)
	{
		return (NULL);
	}
	return (a);
}
