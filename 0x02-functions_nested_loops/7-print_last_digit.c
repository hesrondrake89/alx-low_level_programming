#include "main.h"

/**
 * print_last_digit - function that print last digit of a number
 *
 * @n: entry point
 *
 * Return: return last digit
 **/

int print_last_digit(int n)
{
	n = n % 10;

	if (n < 0)
	{
		n = -n;
	}
	else
	{
		_putchar(n + '0');
	}
	return (n);
}
