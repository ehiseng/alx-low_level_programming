#include "main.h"

/**
 * _isupper - uppercase leters
 * @c: char to check if uppercase
 *
 * Return: 1 if uppercase and 0 if otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
