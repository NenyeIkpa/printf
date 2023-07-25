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
	unsigned int i, j, count = 0;
	char *utr, *ptr;

	i = va_arg(ap, unsigned int);
	ptr = malloc(sizeof(char *) * 8 + 1);
	if (ptr == NULL)
		return (0);
	utr = _itoa(i, ptr, 10);

	for (j = 0; utr[j]; j++)
		count = count + _putchar(utr[j]);

	free(ptr);
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
	unsigned int i, j, k = 0, count = 0;
	char *Xtr, *ptr;
	char letters[] = {'a', 'b', 'c', 'd', 'e', 'f'};
	char cap_letters[] = {'A', 'B', 'C', 'D', 'E', 'F'};

	i = va_arg(ap, unsigned int);
	ptr = malloc(sizeof(char *) * 8 + 1);
	if (ptr == NULL)
		return (0);
	Xtr = _itoa(i, ptr, 16);
	for (j = 0; Xtr[j]; j++)
	{
		count = count + _putchar(Xtr[j]);
		while (k < 6)
		{
			if (Xtr[j] == letters[k])
				Xtr[j] = cap_letters[k];
			k++;
		}
	}
	free(ptr);
	return (count);
}
