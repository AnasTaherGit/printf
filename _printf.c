#include "main.h"

/**
 * _printf - prints a formatted string
 * @format: the string to print
 *
 * Return: the number of characters printed
 */

int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;

	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
			case 'c':
				print_char(args);
				count++;
				break;
			case 's':
				print_string(args);
				count++;
				break;
			case '%':
				print_percent(args);
				count++;
				break;
			default:
				_putchar('%');
				_putchar(*format);
				count += 2;
				break;
			}
		}
		else
		{
			_putchar(*format);
			count++;
		}
		format++;
	}
	va_end(args);
	return (count);
}