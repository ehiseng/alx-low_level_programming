#include "main.h"
#include <string.h>

/**
 * _memset - function that set memory
 * @n: number of bytes to be filled
 * @b: constant of bytes to be filled
 * @s: a string
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int c;

	for (c = 0 ; c = < n ; c++)
		s[c] = b;

	return (s);
}
