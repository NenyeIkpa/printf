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
	unsigned int i, j, count = 0;
	char *otr, *ptr;

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
	unsigned int i, j, count = 0;
	char *utr, *ptr;

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
	unsigned int i, j, count = 0;
	char *xtr, *ptr;
	
	i = va_arg(ap, unsigned int);
	ptr = malloc(sizeof(char *) * 8 + 1);
	if (ptr == NULL)
		return(0);
	xtr = _itoa(i, ptr, 16);
	
	for (j = 0; xtr[j]; j++)
		count = count + _putchar(xtr[j]);
	
	free (ptr);
	return (count);
}

/**
 * _putX - function that prints the number given in
 * unsigned hexadecimal or base in capital letters.
 */

int _putX(va_list ap)
{
	unsigned int i, j, k = 0, count = 0;
	char *Xtr, *ptr;
	char letters[] = {a, b, c, d, e, f};
	char cap_letters[] = {A, B, C, D, E, F};
	
	i = va_arg(ap, unsigned int);
	ptr = malloc(sizeof(char *) * 8 + 1);
	if (ptr = NULL)
		return(0);
	Xtr = _itoa(i, ptr, 16);

	for (j = 0; Xtr[j]; j++)
	{
		count = count + _putchar(Xtr[j]);
		while (k < 6)
		{
			if ((Xtr[j] == letters[k])
				Xtr[j] = cap_letters[k];
			k++;
		}
	}
	free (ptr);
	return (count);
}
