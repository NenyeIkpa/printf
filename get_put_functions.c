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
		{"d", _putd},
		{"i", _putd},
		{"b", _putb},
		{"o", _puto},
		{"u", _putu},
		{"x", _putx},
		{"X", _putX},
		{"r", _putr},
		{"p", _putp},
		{NULL, NULL}
	};
	unsigned long int i = 0, j = 0, count = 0;

	va_start(args, format);
	if (format == NULL)
		return (-1);
	while (format && format[i])
	{
		if ((i == strlen(format) - 1 && format[i] == '%') ||
				(format[i] == '%' && format[i + 1] == ' ' && format[i + 2] == '\0'))
			return (-1);
		if (format[i] == '%' && format[i + 1] == '%')
		{
			count = count + _putchar(format[i + 1]);
			i += 2;
			continue;
		}
		if (format[i] != '%')
		{
			count = count + _putchar(format[i]);
			i++;
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
		if (format[i] == '%')
		{
			count = count + _putchar(format[i]);
			i++;
		}
	}
	va_end(args);
	return (count);
}
