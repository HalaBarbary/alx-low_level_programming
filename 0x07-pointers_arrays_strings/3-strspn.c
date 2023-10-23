#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 *@s: a pointer to a string
 *@accept: the prefix substring
 *Return: size of substring
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, x, z;

	z = 0;

	for (i = 0; s[i] != ' '; i++)
	{
		for (x = 0; accept[x] != '\0'; x++)
		{
			if (s[i] == accept[x])
			{
				z++;
			}
		}
	}
	return (z);
}

