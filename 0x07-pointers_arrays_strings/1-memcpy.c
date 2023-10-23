#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: a pointer to charcter of  destination
 * @src: a pointer to cahracter of source
 * @n: number of bytes
 * Return: a pointer to a char
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

