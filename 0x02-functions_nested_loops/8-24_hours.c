#include "main.h"
/**
 * jack_bauer - print day minutes
 * Description: print every minute
 * Return: nothing
 */
void jack_bauer(void)
{
	int h;
	int m;

	for (h = 0; h <= 24; h++)
	{
		for (m = 0; m < 60; m++)
		{
			if (h < 10)
			{
				_putchar('0');
				_putchar((char)h);
			} else
			{
				_putchar((char)h);
			}

			_putchar(':');

			if (m < 10)
			{
				_putchar('0');
				_putchar((char)m);
				_putchar('\n');
			} else
			{
				_putchar((char)m);
				_putchar('\n');
			}
		}
	}
}
