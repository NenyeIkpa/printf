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
	int i, j, count = 0;
	char *str;

	i = va_arg(ap, int);
	str = _itoa(i, (sizeof(int) * 8 + 1), 10);
	for (j = 0; str[j]; j++)
		count = count + _putchar(str[j]);
	return (count);
}
