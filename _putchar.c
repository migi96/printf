#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _puts - write string s
 * @s: string
 *
 * Return: cnt
 */
int _puts(const char *s)
{
	int cnt = 0;

	while (*s)
	{
		_putchar(*s);
		s++;
		cnt++;
	}
	return (cnt);
}
