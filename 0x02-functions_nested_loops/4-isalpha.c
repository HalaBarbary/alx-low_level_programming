#include "main.h"
/**
 * _isalpha - Check if the charcter is alphabet
 * Description: Check for alphabet
 * @c: the checked character in ascii
 * Return: 1 if a letter  and 0 otherwise
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
