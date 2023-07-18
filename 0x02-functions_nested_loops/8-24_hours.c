#include "main.h"
/**
 * jack_bauer - print every minute of the day, starting from 00:00 - 23:59.
 *
 * Return : void
 */
void jack_bauer(void)
{
	int i, j;

	for (i = 0 ; i < 24 ; i++)
	{
		for (j = 16 ; j < 40 ; j++)
		{
					_putchar(i / 10 + '0');
					_putchar(i % 10 + '0');
					_putchar(':');
					_putchar(j / 10 + '0');
					_putchar(j % 10 + '0');
					_putchar('\n');
		}
	}
}
