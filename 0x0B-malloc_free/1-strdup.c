#include "main.h"
#include <stdlib.h>
/**
 * _strdup - duplicate string
 * @str: the original string
 * Return: a pointer to the duplicate
 */
char *_strdup(char *str)
{
	int i = 0;
	int x;
	char *s;

	while (str[i] != '\0')
	{
		i++;
	}
	s = malloc(i);
	if (str == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < i; x++)
	{
		s[x] = str[x];
	}
	return (s);
}
