#include "main.h"

/**
 * _memset - Entry point
 * @s: pointed destination
 * @b: constant byte
 * @n: bytes
 * Return: Always o (success)
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
<<<<<<< HEAD

=======
	
>>>>>>> 28cc3814744ef5631e7b8c787d1a7b8ab65dc793
	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
