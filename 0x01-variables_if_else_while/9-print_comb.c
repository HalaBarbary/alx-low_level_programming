#include <stdio.h>
/**
 * main - C program entry point
 * Description: C program entry point
 * Return: 0 if the program runs correctly
 */
int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		if (i != 57)
		{
			putchar(i);
			putchar(',');
			putchar(' ');
		} else
		{
			putchar(i);
		}
	}
	return (0);
}
