#include <stdlib.h>
#include "main.h"
/* _strdup - duplicate string
 * @str: the original string
 * Return: a pointer to the duplicate
 */

char *_strdup(char *str)
{
	char *s = malloc(sizeof(*str));
	int i;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; *str != '\0'; i++)
	{
		s[i] = str[i];
	}
	return (s);
}
