#include "main.h"
/**
 * factorial -  returns the factorial of a given number
 * @n: integer
 * Return: n is lower than 0 = 1, otherwise, error
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
