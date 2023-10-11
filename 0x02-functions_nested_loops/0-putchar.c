#include <stdio.h>
#include "main.h"
/**
 * main - C program entry point
 * Description: C program entry point
 * Return: 0 if the program runs correctly
*/
int main(void)
{
	char print[] = "_putchar";
	int i;
	for ( i = 0; i <=7; i++)
	{
		_putchar(print[i]);
	}
	_putchar('\n');
	return (0);
}
