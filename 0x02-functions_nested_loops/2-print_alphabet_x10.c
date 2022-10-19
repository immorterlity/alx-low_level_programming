#include "main.h"

/**
 * print_alphabet_x10 - print 10 times the alphabet in lower case
 */

void print_alphabet_x10(void)
{
	int n, co;

	co = 0;

	while (co <= 9)
	{
		for (n = 'a'; n <= 'z'; n++)
		{
			_putchar(n);
		}
		co++;
		_putchar('\n');
	}
}
