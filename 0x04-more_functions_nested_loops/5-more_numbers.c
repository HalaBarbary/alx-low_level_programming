#include "main.h"
/**
 * more_numbers - print from 0 to 14 10 times
 * Return: nothing
 */
void more_numbers(void)
{
	int i;
	int x;

	for (i = 0; i <= 10; i++)
	{
		for (x = 0; x <= 14; x++)
		{
			_putchar(x);
		}
		_putchar('\n');
	}
	return (void);
}
