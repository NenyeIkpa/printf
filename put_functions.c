#include "main.h"

/**
 * _putchar - prints characters
 *
 * @c: parameter of type char
 *
 * Return: int
 */

int _putchar(char c)
{
	write(1, &c, sizeof(char));
	return (1);
}

/**
 * _putc - prints a variadic arg of type char
 *
 * @ap: arg pointer
 *
 * Description: accesses the value of pointer to
 * the character using va_arg and prints using
 * _putchar
 *
 * Return: int
 */

int _putc(va_list ap)
{
	char c;

	c = va_arg(ap, int);
	return (0 + _putchar(c));
}

/**
 * _puts - prints a variadic arg of type char *
 *
 * @ap: arg pointer
 *
 * Description: accesses the string value in pointer
 * using va_arg. checks for nullability and by a loop
 * prints each character using _putchar
 *
 * Return: int
 */

int _puts(va_list ap)
{
	int i, char_count = 0;
	char *str;

	str = va_arg(ap, char *);
	if (str == NULL)
		return (0);
	for (i = 0; str[i]; i++)
		char_count = char_count + _putchar(str[i]);
	return (char_count);
}

/**
 * _putd - a function that prints integers
 *
 * @ap: arg pointer
 *
 * Return: int
 */

int _putd(va_list ap)
{
	int n = va_arg(ap, int);
	int num, last = n % 10, digit, exp = 1;
	int  i = 1;

	n = n / 10;
	num = n;

	if (last < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
		last = -last;
		i++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = n;
		while (exp > 0)
		{
			digit = num / exp;
			_putchar(digit + '0');
			num = num - (digit * exp);
			exp = exp / 10;
			i++;
		}
	}
	_putchar(last + '0');

	return (i);
}

/**
 * _putb - prints the binary code of a given number
 *
 * @ap: arg pointer
 *
 * Return: int
 */

int _putb(va_list ap)
{
	unsigned int n, m, i, sum;
	unsigned int a[32];
	int count;

	n = va_arg(ap, unsigned int);
	m = 2147483648; /* (2 ^ 31) */
	a[0] = n / m;
	for (i = 1; i < 32; i++)
	{
		m /= BINARY;
		a[i] = (n / m) % BINARY;
	}
	for (i = 0, sum = 0, count = 0; i < 32; i++)
	{
		sum += a[i];
		if (sum || i == 31)
		{
			_putchar('0' + a[i]);
			count++;
		}
	}
	return (count);
}
