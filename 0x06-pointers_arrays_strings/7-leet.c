#include "main.h"
/**
 * leet - Converts to leet format
 * @s: string to be formatted
 *
 *  Return: formatted string
 */
char *leet(char *s)
{
	int i = 0, j;
	char c[] = "aAeEoOtTlL";
	char v[] = "43071";

	while (s[i] != '\0')
	{
		for (j = 0; c[j] != '\0'; j++)
		{
			if (s[i] == c[j])
				s[i] = v[j / 2];
		}
		i++;
	}
	return (s);
}
