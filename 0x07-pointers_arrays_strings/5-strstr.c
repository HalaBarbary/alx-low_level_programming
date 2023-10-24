#include "main.h"
/**
 * _strstr - finds a substring
 * @haystack: the string we are searching in
 * @needle: the string searched for
 * Return: a pointer to the substring in haystack
 */

char *_strstr(char *haystack, char *needle)
{
	char *ret;
	unsigned int i, x;

	ret = '\0';
	for (x = 0; haystack[x] != '\0'; x++)
	{
		i = 0;
		if (needle[0] == haystack[x])
		{
			ret = &haystack[x];
			while (needle[i] == haystack[x])
			{
				if (sizeof(needle) == sizeof(haystack[x]))
				{
					return (ret);
				}
				i++;
				x++;
			}
		}
	}
	return (ret);
}
