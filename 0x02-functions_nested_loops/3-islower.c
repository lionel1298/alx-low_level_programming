#include "main.h"
/**
 * _islower - check for lowercase
 *
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
 *
 * Return: 1 if c is lowercase, else 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
