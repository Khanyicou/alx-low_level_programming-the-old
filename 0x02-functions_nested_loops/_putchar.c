#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the charater c to stdout
 * @c: The character to print
 *
 * Return: on success 1.
 * on error, -l is returned, and errno is set appropiately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
