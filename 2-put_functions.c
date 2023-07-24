#include "main.h"

/**
 * _puto - 
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
