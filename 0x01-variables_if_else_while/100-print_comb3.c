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

	for (i = 48; i <= 56; i++)
	{
		for (x = 49; x <= 57; x++)
		{
			putchar(i);
			putchar(x);
			if (i != 56 && x != 57)
			{
				putchar(',');
				putchar(' ');
			} else
			{
				putchar(' ');
			}
		}
	}
	return (0);
}
