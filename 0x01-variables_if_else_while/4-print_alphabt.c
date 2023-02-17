#include <stdio.h>

/**
 * main - alphabet printed in lowercase
 * then followed by a new linw
 * Return: value (0)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'e' && c != 'q')
			putchar(c);
	}

	putchar('\n');

	return (0);
}
