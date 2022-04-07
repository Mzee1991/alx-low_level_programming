#include <stdlib.h>
#include <stdio.h>

/**
 * *malloc_checked - allocates memory using malloc and exit if failed
 * @b: size to be allocated
 * Return: pointer to the array initialized or NULL
 */

void *malloc_checked(unsigned int b)
{
	void *m;
	
	m = malloc(b);
	if (m == 0)
		exit(98);
	return (m);
}
