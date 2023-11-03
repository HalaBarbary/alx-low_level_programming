#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates 2 strings
 * @s1: a pointer to the first string
 * @s2: a pointer to the second string
 * @n: the number of bytes from string 2
 * Return: a pointer to the new allocated memory with the 2 strings
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i, x;

	p = malloc(strlen(s1) + (n + 1));
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; *s1[i] != NULL; i++)
	{
		p[i] = s1[i];
	}
	for (x = 0; *s2[x] != NULL && x < n; x++)
	{
		p[x + i] = s2[x];
	}
	return (p);
}
