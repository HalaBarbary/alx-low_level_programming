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
				_putchar((int)h);
			} else
			{
				_putchar((int)h);
			}

			_putchar(':');

			if (m < 10)
			{
				_putchar('0');
				_putchar((int)m);
				_putchar('\n');
			} else
			{
				_putchar((int)m);
				_putchar('\n');
			}
		}
	}
}
