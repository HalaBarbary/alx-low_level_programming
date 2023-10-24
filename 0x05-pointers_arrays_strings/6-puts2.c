#include "main.h"
/**
 * puts2 - print every other char
 * @str: a pointer to a string
 * Return: nothing
 */
void puts2(char *str)
{
	unsigned long int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
