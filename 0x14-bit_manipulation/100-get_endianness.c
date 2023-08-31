#include "main.h"

/**
 * get_endianness - Checks the endianness of the system.
 * Return: 0
 */
int get_endianness(void)
{
	unsigned int num = 1;
	char *ptr = (char *)&num;

	if (*ptr)
		return (1);
	else
		return (0);
}
