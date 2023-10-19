#include "main.h"

/**
 * handle_octal - octal numbers
 * @n: unsigned integer
 * Return: cnt
 */
int handle_octal(unsigned int n)
{
	int cnt = 0;
	int mon;

	if (n / 8 != 0)
	{
		cnt += handle_octal(n / 8);
	}

	mon = n % 8;

	return (cnt + _putchar(mon + '0'));
}

/**
 * handle_hex_lower - lower hexa number
 * @n: unsigned integer
 * Return: cnt
 */
int handle_hex_lower(unsigned int n)
{
	int cnt = 0;
	int mon;

	if (n / 16 != 0)
	{
		cnt += handle_hex_lower(n / 16);
	}

	mon = n % 16;

	return (cnt + _putchar((mon < 10) ?
				(mon + '0') : (mon - 10 + 'a')));
}


/**
 * handle_hex_upper - upper hexa numbers
 * @n: unsigned integer
 * Return: cnt
 */
int handle_hex_upper(unsigned int n)
{
	int cnt = 0;
	int mon;

	if (n / 16 != 0)
	{
		cnt += handle_hex_upper(n / 16);
	}

	mon = n % 16;

	return (cnt + _putchar((mon < 10) ?
				(mon + '0') : (mon - 10 + 'A')));
}
