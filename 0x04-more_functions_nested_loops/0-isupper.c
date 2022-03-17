#include "main.h"
/**
 * _isupper - tells if file is uppercase
 * @c: the variable that prints if uppercase
 * Return: 1 if uppercase, 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
