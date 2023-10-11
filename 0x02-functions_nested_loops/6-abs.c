#include "main.h"
/**
 *_abs - absolute integer value
 * Description: compute the absolute int value
 *@x: the computed int
 * Return: absolute value if the program runs correctly
 */
int _abs(int x)
{

	int ret_val;

	if (x >= 0)
	{
		ret_val = x;
	} else if (x < 0)
	{
		ret_val = 0 - x;
	}
	return (ret_val);
}
