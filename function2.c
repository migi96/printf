#include "main.h"

/**
 * ints - print integer
 * @n: integer parameter
 * Return: 1
 */
int ints(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n / 10 != 0)
	{
		int cnt = ints(n / 10);

		_putchar(n % 10 + '0');
		return (cnt + 1);
	}
	else
	{
		_putchar(n + '0');
		return (1);
	}
}

/**
 * I_handle_d_specifier - handle the %d specifier.
 * @n: integer
 * Return: cnt + _putchar(n % 10 + '0')
 */
int I_handle_d_specifier(int n)
{
	int cnt = 0;

	if (n < 0)
	{
		_putchar('-');
		cnt++;
		n = -n;
	}

	cnt += ints(n);

	return (cnt);
}


/**
 * handle_u_int - desimal
 * @n: unsigned integer
 * Return: cnt
 */
int handle_u_int(unsigned int n)
{
	int cnt = 0;
	int mon;

	if (n / 10 != 0)
	{
		cnt += handle_u_int(n / 10);
	}

	mon = n % 10;

	return (cnt + _putchar(mon + '0'));
}

