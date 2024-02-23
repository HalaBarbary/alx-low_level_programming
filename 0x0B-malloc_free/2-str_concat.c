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
	char *str_c;
	int i;
	int x;

	if (s1 == NULL)
	{
		str_c = malloc(sizeof(*s2) + 1);
		s1 = "";
	} else if (s2 == NULL)
	{
		str_c = malloc(sizeof(*s1) + 1);
		s2 = "";
	} else if (s1 == NULL && s2 == NULL)
	{
		s1 = "";
		s2 = "";
	} else
	{
		str_c = malloc(sizeof(*s1) + sizeof(*s2) + 1);
	}

	if (str_c == NULL)
	{
		return (NULL);
	}
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
	return (str_c);
}
