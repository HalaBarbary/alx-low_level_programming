#include "main.h"
/**
 * _strchr - searches for a character in a string
 *@s: a pointer to a char
 *@c: the charcter to search for
 *Return: a pointer to the first occurrence of the character c
 */

char *_strchr(char *s, char c)
{
	unsigned long int i;
	char *h;

	for (i = 0; i < sizeof(s); i++)
	{
		if (s[i] == c)
		{
			h = &s[i];
		}
		else
		{
			h = '\0';
		}
	}
	return (h);
}
