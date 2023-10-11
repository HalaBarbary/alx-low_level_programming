#include "main.h"
/**
 * print_last_digit - print the last digit
 * Description: a function that prints the last digit of a given number
 *@g: the given number
 * Return: the value of the last digit
 */

int print_last_digit(int g)
{
	int x;

	x = g % 10;
	_putchar(x + '0');
	return (x);
}
