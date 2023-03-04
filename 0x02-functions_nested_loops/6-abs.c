#include "main.h"

/**
 * _abs - function that prints absolute value
 * @a: function parameter
 * Return: a
 */
int _abs(int a)
{
	if (a < 0)
		a = -(a);
	else if (a >= 0)
		a = a;
	return (a);
}
