#include "main.h"



/**
 * binaries - change decimal to binary.
 * @n: ints
 * Return: cnt + binary
 */
int binaries(int n)
{
	int cnt = 0;
	int leds = 1;
	int i;

	for (i = 31; i >= 0; i--)
	{
		char bit = (n >> i) & 1;

		if (bit == 1)
		{
			leds = 0;
		}

		if (!leds)
		{
			cnt += _putchar(bit + '0');
		}
	}

	if (cnt == 0)
	{
		cnt += _putchar('0');
	}

	return (cnt);
}

/**
 * custom_string - custom string formatting
 * @mon: The string to format.
 * Return: Number of characters printed.
 */
int custom_string(char *mon)
{
	int cnt = 0;

	if (mon == NULL)
		return (_puts("(null)"));

	while (*mon)
	{
		if ((*mon >= 1 && *mon <= 31) || *mon >= 127)
		{
			cnt += _putchar('\\');
			cnt += _putchar('x');
			cnt += _putchar((*mon / 16 < 10)
					? (*mon / 16 + '0') : (*mon / 16 - 10 + 'A'));
			cnt += _putchar((*mon % 16 < 10)
					? (*mon % 16 + '0') : (*mon % 16 - 10 + 'A'));
		}
		else
		{
			_putchar(*mon);
			cnt++;
		}

		mon++;
	}

	return (cnt);
}

/**
 * string - string
 * @mon: arguments.
 * Return: void
 */
int string(char *mon)
{
	if (mon == NULL)
	{
		return (_puts("(null)"));
	}
	else
	{
		return (_puts(mon));
	}
}
