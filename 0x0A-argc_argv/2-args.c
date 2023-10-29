#include <stdio.h>
/**
 * main - C program entry point
 * @argc: arguments count
 * @argv: a pointer to a string
 * Return: 0 if the program runs correctly
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
