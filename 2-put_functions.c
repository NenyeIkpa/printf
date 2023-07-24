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
	char otr, *ptr;

	i = va_arg(ap, unsigned int);
	ptr = malloc(sizeof(char *) * 8 + 1);
	if (ptr == NULL)
		return(0);
	otr = _itoa(i, ptr, 8);

	for (j = 0; otr[j]; j++)
		count = count + _putchar(otr[j]);

	free (ptr);
	return (count);
}

/**
 *
 */

int _putu(va_list ap)
{
	unsigned int i, j, count = 0;
	char utr, *ptr;

	i = va_arg(ap, unsigned int);
	ptr = malloc(sizeof(char *) * 8 + 1);
	if (ptr == NULL)
		return(0);
	utr = _itoa(i, ptr, 10);

	for (j = 0; utr[j]; j++)
		count = count + _putchar(otr[j]);

	free (ptr);
	return (count);
}
