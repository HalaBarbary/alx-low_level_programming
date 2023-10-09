#include <stdio.h>
/**
 * main - C program entry point
 * Description: C program entry point
 * Return: 0 if the program runs correctly
*/
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		if ((alphabet == 'e') || (alphabet == 'q'))
		{
			alphabet++;
		}
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
