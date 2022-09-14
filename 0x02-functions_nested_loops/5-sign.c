#include "main.h"
/**
 * print_sign - Sign detection
 *
 * @n: parameter is an integer value
 *
 * Description: a function that prints the sign of a number.
 *
 * Return: 1 if n > 0, 0 if n equals 0 and -1 if n < 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
