#include "main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes
 *@s: a pointer to the source string
 *@accept: a pointer to the searched for string
 *Return: a pointer to the matching s byte
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, x;
	char *r;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (x = 0; accept[x] != '\0'; x++)
		{
			if (accept[x] == s[i])
			{
				r = &s[i];
				return (r);
			}
		}
	}
	return ('\0');
}
