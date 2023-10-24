#include "main.h"
/**
 * _strcpy - copies a string into another
 * @dest: destination string
 * @src: source string
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	unsigned long int i;

	for (i = 0; src != '\0'; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
