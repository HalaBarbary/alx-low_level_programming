#include "main.h"
/** print_line - print line
 * @n: num of _
 * Return: nothing
 */
void print_line(int n)
{
	int i;

	for (i = 0; i <=n; i++)
	{
		if (n <= 0)
		{
			_putchar('\0');
		}else
		{
		_putchar('_');
		}
	}
	_putchar('\n');
}
