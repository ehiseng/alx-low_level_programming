#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 * @argc: count argument
 * @argv: vector argument
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i = argc;

	for (i = 0 ; i < argc ; i++)
	{
	printf("%s\n", argv[i]);
	}
	return (0);
}
