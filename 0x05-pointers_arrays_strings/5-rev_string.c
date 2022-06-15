#include "main.h"
/**
 * rev_string - prints reverse string, followed by a new line
 * @s: pointer to the string to print
 * Return: void
 */
void rev_string(char *s)
{
	int i = 0, k = 0;
	char let;

	while (s[k] != '\0')
		k++;
	while (i < k--)
	{
		let = s[i];
		s[i++] = s[k];
		s[k] = let;
	}
}
