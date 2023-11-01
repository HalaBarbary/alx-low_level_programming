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
	if (size > 0)
	{
		char *a = malloc(size);
		
		a[0] = c;
		return (a);
	}
		return (NULL);
}
