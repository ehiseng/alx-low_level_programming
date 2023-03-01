#include "main.h"
#include <string.h>

/**
 * string_toupper - changes lowwercase to uppercase
 * @x: string parameter
 * Return: string
 */
char *string_toupper(char *x)
{
	int i = 0;

	while (x[i])
	{
		if (x[i] >= 97 && x[i] <= 122)
			x[i] = x[i] - 32;
		i++;
	}
	return (x);
}
