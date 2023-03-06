#include "main.h"
/**
 * _memcpy- function copies n bytes from memory area
 * @dest: destination
 * @src: source
 * @n: integer
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;
	int j = n;

	for (; i < j; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
