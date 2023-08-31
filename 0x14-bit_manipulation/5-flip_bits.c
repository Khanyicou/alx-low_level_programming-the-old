#include "main.h"

/**
 * flip_bits - Returns the number of bits to flip to get from n to m.
 * @n: The 1st number.
 * @m: The 2nd number.
 *
 * Return: The number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int diff = n ^ m;

while (diff > 0)
	{

		count += diff & 1;
		diff >>= 1;
	}

return (count);
}
