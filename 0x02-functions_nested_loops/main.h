
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

/**
 * pprint - prints _putchar
 * Return: 0 on success
 */
int pprint (void);

int pprint (void)
{
	char print[] = "_putchar";
	int i;
	for ( i = 0; i <=7; i++)
	{
		_putchar(print[i]);
	}
	_putchar('\n');
	return (0);
}

/**
 * print_alphabet - prints the alphabet in lowercase followed by a newline
 * Return: void
 */
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

/**
 * print_alphabet_x10 - prints the alphabet 10 times each followed by a new line
 * Return: void
 */

void print_alphabet_x10(void);

void print_alphabet_x10(void)
{
	int i = 0;

	while( i <= 9)
	{
		print_alphabet();
		i++;
	}
}
