#include "main.h"

int _printf(const char *format, ...);

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
	int i = 0, j = 0, k = 0, count = 0;
	char special_xters[] = {'d', 'i', 'o', 'u', 'x', 'e', 'f', 'g', 'c', 's', 'p', 'X', 'F', 'G'};

	va_start(args, format);
	if (format == NULL)
		return (-1);
	while (format && format[i])
	{
		if (i == (int)strlen(format) - 1 && format[i] == '%')
			return (-1);
		if (format[i] == '%' && (format[i + 1] == ' ' && format[i + 2] == '%'))
		{
			count = count + _putchar(format[i]);
			i += 3;
			continue;
		}
		if (format[i] != '%' || (format[i] == '%' && format[i + 1] == ' '))
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
		while (special_xters[k])
		{
			if (format[i] == '%' && format[i + 1] != special_xters[k])
			{
				count = count + _putchar(format[i]);
				i++;
				k = 0;
				break;
			}
			++k;
		}
	}
	va_end(args);
	return (count);
}
