#include "main.h"

/**
 * _puto - a function that prints the number
 * that is passed into it in octal form.
 * @ap: arguement pointer
 *
 * Return: count which is the number of octal
 * printed
 */

int _puto(va_list ap)
{
	unsigned int i, j, count = 0;
	char otr;

	i = va_arg(ap, unsigned int);
	otr = _itoa(i, malloc(sizeof(char *) * 8 + 1), 8);
	for (j = 0; otr[j]; j++)
		count = count + _putchar(otr[j]);
	return (count);
}
