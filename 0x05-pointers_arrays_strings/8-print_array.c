#include <stdio.h>
#include "main.h"
/**
 * print_array - prints an array of ints
 * @a: a pinter to an array
 * @n: number of array elements
 * Return: nothing
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != n - 1)
		{
			printf("%d ,", a[i]);
		} else
		{
			 printf("%d ", a[i]);
		}

	}
	printf("\n");
}
