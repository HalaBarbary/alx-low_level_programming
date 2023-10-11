#include "main.h"
/**
 * print_alphabet_x10 - print alphabet 10 times
 * Description: print alphabet 10 times each followed by anew line
 * Return: no return
 */

void print_alphabet_x10(void)
{
	int i = 0;

	while (i <= 9)
	{
		print_alphabet();
		i++;
	}
}
