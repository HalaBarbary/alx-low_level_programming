#include "main.h"
/**
 * _print_rev_recursion - prints a reversed string recursively
 * @s: a pointer to a string
 * Return: nothing
 */
void _print_rev_recursion(char *s)
{
	char *r;

	r = s;
	if (*s != '\0')
	{
		s++;
		_print_rev_recursion(s);
	} else if (s != r)
	{
		s--;
		_putchar(*s);
		_print_rev_recursion(s);
	}
}
