#include "main.h"
/**
 * print_alphabet_x10 - print alphabet 10 times
 * Description: print alphabet 10 times each followed by anew line
 * Return: no return
 */

void print_alphabet_x10(void)
{
	int i = 0;
	char c;

	while (i <= 9)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
		i++;
	}
}
