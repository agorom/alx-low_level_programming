#include "main.h"

/**
 * print_rev - a function that prints a string, in reverse
 * @s: pointer to the string to print
 * Return: void
 */
void print_rev(char *s)
{
	int k = 0;

	while (s[k])
		k++;
	while (k--)
	{
		_putchar(s[k]);
	}
	_putchar('\n');
}
