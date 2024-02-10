#include "main.h"
/**
 * _strlen_recursion - recursively return astring length
 * @s: a pointer to the first character of a string
 * Return: string length as an integer
 */
int _strlen_recursion(char *s)
{
	
	if (*s == '\0')
	{
		return(0);
	}

	return 1 + (_strlen_recursion(s + 1));
}
