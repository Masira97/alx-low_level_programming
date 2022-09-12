#include <stdio.h>

/**
 * main - prints numbers between 00 to 99.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, e;

	i = 38;
	e = 38;

	while (e < 48)
	{
		i = 38;
		while (i < 48)
		{
			putchar(e);
			putchar(i);
			if (i == 47 && e == 47)
			{
				break;
			}
			putchar(',');
			putchar(' ');
			i++;
		}
		e++;
	}
	putchar('\n');
	return (0);
}
