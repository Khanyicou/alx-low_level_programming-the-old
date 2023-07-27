#include "main.h"

/**
 * string_toupper - change  all lowercase letters of a string to uppercase
 * @s: pointer to the string
 *
 * Return: pointer to the uppercase string
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;
	}

	return (s);
}
