#include "main.h"
/**
 * is_divisible - checks whether number is divisible or not
 * @n: integer
 * @c: divisor
 * Return: 1 if n is a prime number. 0 if n is not a prime number
 */
int is_divisible(int n, int c)
{
	if (n % c == 0)
	{
		if (n == c)
			return (1);
		else
			return (0);
	}
	return (0 + is_divisible(n, c + 1));
}
/**
 * is_prime_number - checks whether n is a prime no.
 * @n: integer
 * Return: 1 if the input integer is a prime number, otherwise return 0
 */
int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	return (is_divisible(n, 2));
}
