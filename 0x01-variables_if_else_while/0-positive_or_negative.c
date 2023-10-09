#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - C program entry point
 * Description: C program entry point
 * Return: 0 if the program runs correctly
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%dis positive", n);
	} else if (n < 0)
	{
		printf("%d is negative", n);
	} else
	{
		printf("%d is zero", n);
	}
	return (0);
}
