#include "main.h"

/**
 * print_alphabet_x10 - print 10 times the alphabet in lower case
 */

void print_alphabet_x10(void)
{
	int ten;
	char letter;

	for (ten = 0; ten <= 9; ten++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
		_putchar("/n");
	}
}
