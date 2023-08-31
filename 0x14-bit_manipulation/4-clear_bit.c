#include "main.h"

/**
 * clear_bit - Sets the value of a bit to 0 at a given index.
 * @n: the number.
 *  @index: The index.
 *  Return: 1 if it worked
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n = *n & ~(1 << index);
	return (1);
}
