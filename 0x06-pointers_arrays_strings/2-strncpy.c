#include "main.h"
#include <string.h>

/**
 * _strncpy - function that copy a string
 * @dest: first parameter
 * @src: second parameter
 * @n: third parameter
 * Return: always 0
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
