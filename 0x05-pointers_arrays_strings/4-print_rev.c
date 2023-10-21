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
	i--;
	for (x = 0; x <= i; x++)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
