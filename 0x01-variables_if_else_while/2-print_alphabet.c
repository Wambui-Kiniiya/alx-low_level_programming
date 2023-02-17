#include <stdio.h>

/**
 * main - program prints alphabet in lowercase
 *
 * Return: value (0)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
