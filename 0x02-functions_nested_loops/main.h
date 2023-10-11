/*a function that prints _putchar*/
int pprint (void);

/*pprint definition*/

int pprint (void)
{
	printf("_putchar\n");
	return (0);
}
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
#include <unistd.h>
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/* print_alphabet - prints the alphabet in lowercase followed by a newline*/
void print_alphabet(void);

void print_alphabet(void)
{
	char x;
	for (x = 'a'; x <= 'z'; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
}
