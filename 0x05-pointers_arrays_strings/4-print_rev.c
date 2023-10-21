#include "main.h"
/**
 * print_rev - prints a reversed string
 *@s: a pointer to a string
 * Return: nothing
 */

void print_rev(char *s)
{
	int i;
	int x;
	char *s2;

	s2 = s;
	for (i = 0; *s != 0; i++)
	{
		s++;
	}
	for (x = 0; s != s2; x++)
	{
		_putchar(*s);
		s--;
	}
	_putchar(*s2);
}
