#include "main.h"
/**
 * print_triangle - prints triangle
 * @size: size of triangle
 * Return: 0
 */

void print_triangle(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 0; i <= size; i++)
		{
			for (j = 0; j <= size; j++)
			{
				if ((i + j) <= size)
					_putchar(32);
				else
					_putchar(35);
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
