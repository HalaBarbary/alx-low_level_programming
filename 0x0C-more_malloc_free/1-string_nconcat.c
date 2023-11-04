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

	if (n > sizeof(s2))
	{
		n = sizeof(s2);
	}
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	p = malloc(sizeof(s1) + n);
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		p[i] = s1[i];
	}
	for (x = 0; s2[x] != '\0' && x < n; x++, i++)
	{
		p[i] = s2[x];
	}
	p[i] = '\0';
	return (p);
}
