#include "main.h"

/**
 * _memset() function fills the first n bytes of the memory area pointed
 * to by s with the constant byte b
 * Returns a pointer to the memory area s
 * @s: a pointer to the memory area to be filled
 * @b: char to be used
 * @n number of bytes to be used
 *
 * Return: pointer to the memory area @s
 */

char *_memset(char *s, char b, unsigned int n)
{
	while(n)
	{
		s[n-1] = b;
		n--;
	}
	return (s);
}
