#include "main.h"
/**
 *_isupper - checks for uppercase chars
 * @c : checked char ascii
 * Return: 1 if uppercase 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}