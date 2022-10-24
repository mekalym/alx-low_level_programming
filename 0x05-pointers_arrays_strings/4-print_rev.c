#include "main.h"

/**
 * print_rev - printing a string in reverse
 * @s: the stringb to be printed in rev
 */
void print_rev(char *s)
{
	int i, n;

	n = 0;
	while (s[n] != '\0')
		n++;

	for (i = n - 1; i >= 0; 1--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
