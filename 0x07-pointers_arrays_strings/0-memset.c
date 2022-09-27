#include "main.h"

/**
 * _memset - function fills the first n bytes of the memory area pointed
 *  to by s with the constant byte @b
 * Returns a pointer to the memory area s
 * @s: a pointer to the memory area to be filled
 * @b: char to be used
 * @n: number of bytes to be used
 * description _memset: over there
 *
 * Return: pointer to the memory area @s
 */

void *_memset(void *s, int b, size_t n)
{
	unsigned int index;
	unsigned char *memory = s, value = b;

	for (index = 0; index < n; index++)
		memory[index] = value;

	return (memory);
}
