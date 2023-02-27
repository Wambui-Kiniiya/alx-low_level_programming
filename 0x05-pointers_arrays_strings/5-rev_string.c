#include "main.h"

/**
 * rev_string - reverses dtring
 * @s: string
 * Return: string in reverse
 */
void rev_string(char *s)
{
	char ch = s[0];
	int a = 0;
	int i;

	while (s[a] != '\0')
		a++;
	for (i = 0; i < a; i++)
	{
		a--;
		ch = s[i];
		s[i] = s[a];
		s[a] = ch;
	}
}
