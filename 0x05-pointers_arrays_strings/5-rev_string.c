#include "main.h"
/**
 * rev_string - reverse a string
 *@s: a pointer to a string
 * Return: nothing
 */

void rev_string(char *s)
{
	unsigned int i, x, len;
	char c;

	i = 0;
	x = 0;
	while (s[i] != '\0')
	{
		i++;
	}

	len = i;
	
	while (i != 0 && x < len)
	{
		i--;
		c = s[i];
		s[i] = s[x];
		s[x] = c;
		x++;
	}
}
