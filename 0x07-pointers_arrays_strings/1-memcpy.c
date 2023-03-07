#include "main.h"
#include <string.h>

/**
 * _memcpy - functions that copies
 * @n: number of byte
 * @src: source
 * @dest: destination
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
		dest[i] = src[i];
	return (dest);
}
