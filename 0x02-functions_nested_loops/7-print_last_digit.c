#include "main.h"

/**
 * print_last_digit - will print the last digit of a given number.
 * @i: Number used to find the last digit.
 *
 * Description: will print the last digit of a given number. If the
 * number is a negative the value will be return unsigned int.
 *
 * Return: last digit as int value.
 */
int print_last_digit(int i)
{
	int k;

	k = i % 10;
	if (i < 0)
	{
		k = -k;
	}
	_putchar('0' + k);
	return (k);
}

