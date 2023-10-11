#include "main.h"
/**
 * _islower - checks lowercase
 * Description: checks charcter case depending on ascii
 * @c: for storing ascii
 * Return: return 1 if lower case and 0 otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
