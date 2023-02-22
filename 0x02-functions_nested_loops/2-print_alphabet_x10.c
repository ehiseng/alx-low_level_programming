#include "main.h"
/**
 * print_alphabet_x10 - for printing lowercase
 *
 * Return: always 0
 */
void print_alphabet_x10(void)
{
	int d;
	char f;

	for (d = 1 ; d <= 10 ; d++)
	{
		for (f = 'a' ; f <= 'z' ; f++)
			_putchar(f);
		_putchar('\n');
	}
}
