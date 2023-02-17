#include <stdio.h>
/**
 * main - prints all possible combinations
 * of single-digits
 * Return: value (0)
 */
int main(void)
{
	int n;

	for (n = 20; n < 30; n++)
	{
		putchar(n);
		if (n != 29)
		{
			putchar(',');
			putchar(' ');
		}
	putchar('\n');
	return (0);
	}
}
