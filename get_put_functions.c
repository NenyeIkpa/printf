#include "main.h"

/**
 * _printf - prints input
 *
 * @format: character string constant
 *
 * Return: total number of characters printed
 */

int _printf(const char *format, ...)
{
	va_list args;
	print_op options[] = {
		{"c", _putc},
		{"s", _puts},
		{NULL, NULL}
	};
	int i = 0;
	int j = 0;
	int count = 0;

	va_starta(args, format);
	while (format && format[i])
	{
		if (format[i] != '%')
		{
			count = count + _putchar(format[i]);
			i++;
			continue;
		}
		if (format[i] == '%' && format[i + 1] == '%')
		{
			count = count + _putchar(format[i + 1]);
			i += 2;
			continue;
		}
		while (options[j].symbol)
		{
			if (format[i] == '%' && format[i + 1] == *options[j].symbol)
			{
				count = count + options[j].type(args);
				i += 2;
				j = 0;
				break;
			}
			++j;
		}
	}
	va_end(args);
	return (count - 1);
}
