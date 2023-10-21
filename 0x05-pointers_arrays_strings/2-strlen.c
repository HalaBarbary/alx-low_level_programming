#include "main.h"
/**
 * _strlen - returns a string's lenght
 *@s: a pointer to a string
 * Return: string length as an integer
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; *s != 0; i++)
	{
		s++;
	}

	return (i);
}
