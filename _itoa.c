/**
 * reverse - reverses a string.
 *
 * @str: the string to be reversed
 * @length: length of the string
 *
 * Return: void
 */

void reverse(char str[], int length)
{
	int start = 0;
	int end = length - i;
	char temp;

	while (start < end)
	{
		temp = str[start];
		str[start] = str[end];
		str[end] = temp;
		end--;
		start++;
	}
}

/**
 * itoa - function that converts integer to string
 *
 * @num: number to be converted to string
 * @str: holds the number being converted in reverse order
 * @base: base of conversion
 *
 * Return: string char type.
 */

char *itoa(int num, char *str, int base)
{
	int i = 0;
	int isNegative = 0;
	int rem;

	if (num == 0)
	{
		str[i++] = '0';
		str[i] = '\0';
		return (str);
	}

	while (num != 0)
	{
		rem = num % base;
		str[i++] = (rem > 9) ? (rem - 10) + 'a' : rem + '0';
		num = num / base;
	}

	if (isNegative)
		str[i++] = '-';
	str[i] = '\0';
	reverse(str, i);

	return (str);
}

