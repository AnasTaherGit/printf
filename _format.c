#include "main.h"

/**
 * print_char - prints a character
 * @args: the character to print
 */

void print_char(va_list args)
{
	_putchar(va_arg(args, int));
}

/**
 * print_string - prints a string
 * @args: the string to print
 */

int print_string(va_list args)
{
	char *str = va_arg(args, char *);
	int count = 0;

	if (str == NULL)
		str = "(null)";
	return (0);

	while (*str)
	{
		_putchar(*str);
		str++;
		count++;
	}

	return (count);
}

/**
 * print_percent - prints a percent sign
 * @args: the percent sign to print
 */

void print_percent(va_list args)
{
	(void)args;
	_putchar('%');
}
