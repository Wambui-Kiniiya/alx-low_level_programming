#include "main.h"

/**
 * print_alphabet_x10 - prins 10 times the alphabet
 * in lowercase
 */
void print_alphabet_x10(void)
{
	char c;
	int i;

	i = 0;

	while (i < 0)
	{
		c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		i++;
	}
}
