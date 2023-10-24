#include "main.h"
/**
 *puts_half - prints half of a string
 *@str: a pointer to a string
 *Return: nothing
 */
void puts_half(char *str)
{
	int i, n;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	n = (i - 1) / 2;
	while (str[n] != '\0')
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');

}
