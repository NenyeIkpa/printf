#include "main.h"

/**
 * _putp - converts the specifier p to
 * print memoery address
 *
 * @ap: arg pointer
 *
 * Return: int
 */

int _putp(va_list ap)
{
	int i;
	int *array;
	int counter = 0;
	unsigned long num, temp;

	num = va_arg(ap, unsigned long);
	temp = num;
	while (num / HEXADECIMAL != 0)
	{
		num /= HEXADECIMAL;
		counter++;
	}
	counter++;
	array = malloc(counter * sizeof(unsigned long));
	if (array == 0)
		return (0);
	for (i = 0; i < counter; i++)
	{
		array[i] = temp % HEXADECIMAL;
		temp /= HEXADECIMAL;
	}
	_putchar('0');
	_putchar('x');
	for (i = counter - 1; i >= 0; i--)
	{
		if (array[i] > 9)
			array[i] = array[i] + 39;
		_putchar(array[i] + '0');
	}
	free(array);
	return (counter);
}
