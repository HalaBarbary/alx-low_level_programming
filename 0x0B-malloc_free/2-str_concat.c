#include "main.h"
#include "stdlib.h"

/**
 * str_concat - a function taht concatenates 2 strings
 * @s1: a pointer to the first string
 * @s2: a pointer to the second string
 * Return: a pointer to the new concatented string
 */

char *str_concat(char *s1, char *s2)
{
	char *str_c = malloc(sizeof(*s1) + sizeof(*s2) + 1);
	int i;
	int x;

	if (str_c == NULL)
	{
		return (NULL);
	}

	if (*s1 == '\0')
	{
		str_c = s2;
	} else if (*s2 == '\0')
	{
		str_c = s1;
	} else
	{
	for (i = 0; s1[i] != '\0'; i++)
	{
		str_c[i] = s1[i];
	}

	for (x = 0; s2[x] != '\0'; x++)
	{
		str_c[i] = s2[x];
		i++;
	}

	str_c[i] = '\0';
	}
	return (str_c);
}
