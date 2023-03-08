#include "main.h"
/**
 * find_root - finds natural square root of a number
 * @n: integer
 * @c: square root to be used
 * Return: sqaure root or -1
 */
int find_root(int n, int c)
{
	if (c % (n / c) == 0)
	{
		if (c * (n / c) == n)
			return (c);
		else
			return (-1);
	}
	return (0 + find_root(n, c + 1));
}
/**
 * _sqrt_recursion -  returns the natural square root of a number
 * @n: integer
 * Return: natural square root of a number
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (find_root(n, 2));
}
