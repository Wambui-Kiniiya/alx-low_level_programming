#include "main.h"
/**
 * cap_string(char *) - capitalizes all words of a string
 * @str: string to be capitalized
 * Return: pointer to string
 */
char *cap_string(char *)
{
	int index = 0;

	while (str[index])
	{
		while (!(str[index] >= 'a' && str[index] <= 'z'))
			index++;
		if (str[index -1] == ' ' || str[index - 1] == '\t' || str[index - 1] == '\n' ||

