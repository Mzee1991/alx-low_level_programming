#include <stdio.h>

/**
 * main - prints all the single digit numbers of base 10
 *
 * Retun: Always(Success)
 */
int main(void)
{
	char n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}

	putchar('\n');

	return (0);

}
