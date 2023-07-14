#include <stdio.h>

/**
 * main - prints the lowrcase alphabet in reverse,
 * followed by new line
 * Return: 0
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
