#include "main.h"
#include <string.h>

/**
 * reverse_array - function that reverse content of array
 * @a: first parameter
 * @n: second parameter
 * Return: alway 0
 */
void reverse_array(int *a, int n)
{
	int *p, i, aux, k;

	p = a;
	for (i = 0 ; i < n ; i++)
		p++;
	for (k = 0 ; k <= i / 2 ; k++)
	{
		aux = a[k];
		a[k] = *p;
		*p = aux;
		p--;
	}
}
