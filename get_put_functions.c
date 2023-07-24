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
	int i = 0, j = 0, count = 0;

	va_start(args, format);
	if (format == NULL)
		return (-1);
	while (format && format[i])
	{
		if (i == (int)strlen(format) - 1 && format[i] == '%')
			return (-1);
		/** if (format[i] == '%' && (format[i + 1] == ' ' && format[i + 2] == '%'))
		{
			count = count + _putchar(format[i]);
			i += 3;
			continue;
		}*/
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
				if (format[i + 1] == *options[1].symbol && format[i + 2] == '\0')
					count = count - 1;
				i += 2;
				j = 0;
				break;
			}
			++j;
		}
		count = count + _putchar(format[i]);
		j = 0;
		++i;
	}
	va_end(args);
	return (count);
}
