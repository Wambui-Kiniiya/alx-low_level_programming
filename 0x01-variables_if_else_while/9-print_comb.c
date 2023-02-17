#include <stdio.h>

/**
 * main - prints possible combinations
 * of single-digit numbers.
 * Return: value (0)
 */
int main(void)
{
	int n = 0;

	while (1 < 10)
	{
		putchar(n + 48);
		if (n != 9)
		{
			putchar(',');
			putchar(' ');
		}
		n++;
	}
	putchar('\n');
	return (0);
}
