#include <stdio.h>
/**
 * main - C program entry point
 * @argc: arguments count
 * @argv: a pointer to a string
 * Return: 0 if the program runs correctly
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	if (argc > 0)
	{
	printf("%d\n", (argc-1));
	} else
	{
		printf("0");
	}
	return (0);
}
