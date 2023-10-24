#include "main.h"
/**
 * _strcpy - copies a string into another
 * @dest: destination string
 * @src: source string
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; i <= sizeof(src); i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
