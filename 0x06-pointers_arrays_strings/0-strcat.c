#include "main.h"
/**
 * _strcat - concatenates 2 strings
 * @dest: pointer to setination string
 * @src: pointer to source
 * Return: pointer to destination
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int x;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	for (x = 0; src[x] != '\0'; x++)
	{
		dest[i] = src[x];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

