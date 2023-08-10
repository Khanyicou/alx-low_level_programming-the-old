#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - allocates memory using malloc, exit(98) if it fails
 * @b: size of memory block to be allocated
 *
 * Return: a pointer to t address of the memory block
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
