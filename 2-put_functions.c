#include "main.h"

/**
 * _puto - a function that prints the number
 * that is passed into it in octal form.
 *
 * @ap: arguement pointer
 *
 * Return: count which is the number of octal
 * printed
 */

int _puto(va_list ap)
{
	int i;
	int *array;
	int counter = 0;
	unsigned int num = va_arg(ap, unsigned int);
	unsigned int temp = num;

	while (num / OCTAL != 0)
	{
		num /= OCTAL;
		counter++;
	}
	counter++;
	array = malloc(counter * sizeof(int));
	if (array == 0)
		return (0);

	for (i = 0; i < counter; i++)
	{
		array[i] = temp % OCTAL;
		temp /= OCTAL;
	}
	for (i = counter - 1; i >= 0; i--)
	{
		_putchar(array[i] + '0');
	}
	free(array);
	return (counter);
}

/**
 * _putu - a function that prints the number
 * given in unsigned decimal or base ten.
 *
 * @ap: argument passed.
 *
 * Return: count is number of unsigned
 * integers in base 10 printed
 */

int _putu(va_list ap)
{
	int i;
	int *array;
	int counter = 0;
	unsigned int num = va_arg(ap, unsigned int);
	unsigned int temp = num;

	while (num / DECIMAL != 0)
	{
		num /= DECIMAL;
		counter++;
	}
	counter++;
	array = malloc(counter * sizeof(int));
	if (array == 0)
		return (0);
	for (i = 0; i < counter; i++)
	{
		array[i] = temp % DECIMAL;
		temp /= DECIMAL;
	}
	for (i = counter - 1; i >= 0; i--)
	{
		if (array[i] > 9)
			array[i] = array[i] + 7;
		_putchar(array[i] + '0');
	}
	free(array);
	return (counter);
}

/**
 * _putx - function that prints the number given in
 * unsigned hexadecimal or base 16 in lower letters.
 *
 * @ap: argument passed.
 *
 * Return: count which is number of unsigned int
 * base 16 in lower letters printed.
 */

int _putx(va_list ap)
{
	int i;
	int *array;
	int counter = 0;
	unsigned int num = va_arg(ap, unsigned int);
	unsigned int temp = num;

	while (num / HEXADECIMAL != 0)
	{
		num /= HEXADECIMAL;
		counter++;
	}
	counter++;
	array = malloc(counter * sizeof(int));
	if (array == 0)
		return (0);

	for (i = 0; i < counter; i++)
	{
		array[i] = temp % HEXADECIMAL;
		temp /= HEXADECIMAL;
	}
	for (i = counter - 1; i >= 0; i--)
	{
		if (array[i] > 9)
			array[i] = array[i] + 39;
		_putchar(array[i] + '0');
	}
	free(array);
	return (counter);
}

/**
 * _putX - function that prints the number given in
 * unsigned hexadecimal or base in capital letters.
 *
 * @ap: argument passed.
 *
 * Return: count which is number of unsigned int
 * base 16 in capital letters printed.
 */

int _putX(va_list ap)
{
	int i;
	int *array;
	int counter = 0;
	unsigned int num = va_arg(ap, unsigned int);
	unsigned int temp = num;

	while (num / HEXADECIMAL != 0)
	{
		num /= HEXADECIMAL;
		counter++;
	}
	counter++;
	array = malloc(counter * sizeof(int));
	if (array == 0)
		return (0);

	for (i = 0; i < counter; i++)
	{
		array[i] = temp % 16;
		temp /= HEXADECIMAL;
	}
	for (i = counter - 1; i >= 0; i--)
	{
		if (array[i] > 9)
			array[i] = array[i] + 7;
		_putchar(array[i] + '0');
	}
	free(array);
	return (counter);
}

int _putr(va_list ap)
{
	int i, length;
	char *str;

	str = va_arg(ap, char *);
	length = strlen(str);
	if (str == NULL)
		return (0);
	for (i = length - 1; i >= 0; i--)
		_putchar(str[i]);
	return (length);
}
