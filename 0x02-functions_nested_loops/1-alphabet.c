#include <stdio.h>

/**
 * main - Prints alphabet in lower case
 *
 * Return: Always(Success)
 */
void print_alphabet(void);

int main(void)
{
	print_alphabet(char);

	return (0);
}

void print_alphabet(void)
{
	char c;
	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);

		putchar('\n');
	}
}



