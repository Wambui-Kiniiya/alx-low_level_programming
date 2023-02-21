#include "main.h"

/**
 * is_alpha - checks for alphabetic character
 * @c: character to be checked
 * Return: 1 if c is a letter, lowercase or uppercase,
 * otherwise 0
 */

int is_alpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
