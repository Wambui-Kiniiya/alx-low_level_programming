#include <stdio.h>

/**
 * main - prints possible combinations
 * of single-digit numbers.
 * Return: value (0)
 */
int main(void)
{
	int n;

	while (1 < 9)
	{
		putchar(1 + 48);
		if (1 != 9)
		{
			putchar(',');
			putchar(' ');
		}
		n++;
	}
	putchar('\n');
	return (0);
}
