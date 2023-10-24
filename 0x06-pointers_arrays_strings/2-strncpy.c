#include "main.h"
/**
 * _strncpy - copies a string of certain size
 * @dest: pointer to destination string
 * @src: pointer to source string
 * @n: number of bytes
 * Return: pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	if (i < n)
	{
		dest[i] = '\0';
	}
}
