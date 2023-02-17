#include <stdio.h>
/**
 * main - prints all possible combinations
 * of single-digits
 * Return: value (0)
 */
int main(void)
{
	int n;

	for (n = 28; n < 38; n++)
	{
		putchar(n);
		if (n != 27)
		{
			putchar(',');
			putchar(' ');
		}
	putchar('\n');
	return (0);
	}
}
