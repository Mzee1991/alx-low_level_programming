#include "main.h"
/**
 * print_alphabet _ Printing alphabet in lower case
 *
 * Return 0
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}

	_putchar("\n");
}

