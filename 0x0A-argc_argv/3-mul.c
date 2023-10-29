#include <stdio.h>
#include <stdlib.h>
/**
 * main - C program entry point
 * @argc: arguments count
 * @argv: a pointer to a string
 * Return: 0 if the program runs correctly
 */
int main(int argc, char *argv[])
{
	signed int r;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	r = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", r);
	return (0);
}
