#include "main.h"

/**
 * _printf - custom printf
 * @fmt: char
 * Return: cnt
 */

int _printf(const char *fmt, ...)
{
	int cnt = 0;
	va_list args;

	va_start(args, fmt);

	while (*fmt != '\0')
	{
		if (*fmt == '%')
		{
			fmt++;

			if (*fmt == 'd' || *fmt == 'i')
			{
				cnt += I_handle_d_specifier(va_arg(args, int));
			}
			else if (*fmt == 'b')
			{
				cnt += binaries(va_arg(args, int));
			}
			else
			{
				cnt += handle_chars(args, fmt);
			}
		}
		else
		{
			cnt += _putchar(*fmt);
		}
		fmt++;
	}

	va_end(args);
	return (cnt);
}

/**
 * handle_chars - handle_chars
 * @fmt: char
 * @args: arguments
 * Return: cnt
 */

int handle_chars(va_list args, const char *fmt)
{
	int cnt = 0;

	if (*fmt == 'c')
	{
		cnt += _putchar(va_arg(args, int));
	}
	else if (*fmt == 's')
	{
		cnt += string(va_arg(args, char *));
	}
	else if (*fmt == '%')
	{
		cnt += _putchar('%');
	}
	else if (*fmt == 'S')
	{
		cnt += custom_string(va_arg(args, char *));
	}
	else
	{
		cnt += handle_numbers(args, fmt);
	}

	return (cnt);
}

/**
 * handle_numbers - handle_numbers
 * @args: arguments
 * @fmt: char
 * Return: cnt
 */

int handle_numbers(va_list args, const char *fmt)
{
	int cnt = 0;

	if (*fmt == 'u')
	{
		cnt += handle_u_int(va_arg(args, unsigned int));
	}
	else if (*fmt == 'o')
	{
		cnt += handle_octal(va_arg(args, unsigned int));
	}
	else if (*fmt == 'x')
	{
		cnt += handle_hex_lower(va_arg(args, unsigned int));
	}
	else if (*fmt == 'X')
	{
		cnt += handle_hex_upper(va_arg(args, unsigned int));
	}
	else
	{
		cnt += _putchar('%');
		if (*fmt)
		{
			cnt += _putchar(*fmt);
		}
	}
	return (cnt);
}
