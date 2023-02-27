#include "main.h"
/**
 * char *_strcpy - copies the string pointed to by src
 * @dest: destination
 * @src: source
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int s = 0;
	int d = 0;

	while (*(src + s) != '\0')
	{
		s++;
	}
	for ( ; d < s ; d++)
	{
		dest[d] = src[s];
	}
	dest[s] = '\0';
	return (dest);
}
