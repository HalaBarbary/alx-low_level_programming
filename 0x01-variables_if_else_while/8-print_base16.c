#include <stdio.h>
/**
 * main - C program entry point
 * Description: C program entry point
 * Return: 0 if the program runs correctly
 */
int main(void)
{
	int i;
	int x;

	{
		for (i = 48; i <= 57; i++)
		{
			putchar(i);
		}
		for (x = 97; x <= 102; x++)
		{
			putchar(x);
		}
		putchar('\n');
	}
	return (0);
}
