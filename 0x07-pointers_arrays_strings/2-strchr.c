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

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return ('\0');
}
