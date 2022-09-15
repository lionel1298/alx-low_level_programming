#include "main.h"
/**
 *  print_line - draw a straight line
 *  @n: number of times in integer to draw '_'
 *   Description: a function that draws a straight line in the terminal.
 *   Return: None
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
