#include "main.h"
/**
 * _strchr - locates string
 * @s: input
 * @c: input
 * Return: pointer of the character
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
