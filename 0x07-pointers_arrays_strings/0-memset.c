#include "main.h"
/**
 * _memset -sets a block of memory to a constant
 * @s: pointer to achracter loctaes the memory block
 * @b: constant char to be assigned
 * @n: number of bytes set
 * Return: pointer to char s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char **ss;

	ss = &s;
	for (i = 0; i < n; i++)
	{
		*s = b;
		s++;
	}
	s = *ss;
	return (s);
}
