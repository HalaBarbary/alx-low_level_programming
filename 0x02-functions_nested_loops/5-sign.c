# include "main.h"
/**
 * print_sign - print the sign of the numbers
 * Description: print sign
 *@n: the number to check the sign
 * Return: 1 if positive, -1 if negative, 0 if zero
 */
int print_sign(int n)
{
	int ret_val;

	if (n > 0)
	{
		_putchar('+');
		ret_val = 1;
	} else if (n < 0)
	{
		_putchar('-');
		ret_val = -1;
	} else if (n == 0)
	{
		_putchar('0');
		ret_val = 0;
	}
	return (ret_val);
}
