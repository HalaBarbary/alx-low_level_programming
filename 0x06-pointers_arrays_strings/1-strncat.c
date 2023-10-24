#include "main.h"
/**
 * _strncat - concatenates a ceratin size string to destination
 * @dest: destination
 * @src: source
 * @n: size of bytes to be concatented to dest
 * Return: a pointer to destination
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int x;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	for (x = 0; x <= n; x++)
	{
		dest[i] = src[x];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
