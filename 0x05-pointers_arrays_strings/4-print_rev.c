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

	for (i = 0; *s != 0; i++)
	{
		s++;
	}

	for (x = 0; x <= i; x++)
	{
		i--;
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
