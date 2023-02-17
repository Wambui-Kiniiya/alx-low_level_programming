#include <stdio.h>
/**
 * main - prints all possible combinations
 * of single-digits
 * Return: value (0)
 */
int main(void)
{
	int n;

	while (n < 10)
	{
		putchar(48 + n);
		if (n != 9)
		{
			putchar(',');
			putchar(' ');
		}
		n++;
	}
}
