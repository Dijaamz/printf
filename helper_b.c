#include "main.h"

/**
 * print_integer - prints a decimal integer to stdout
 * @n: integer to print
 *
 * Return: number of characters printed
 */
int print_integer(int n)
{
	int count = 0;
	unsigned int num;

	if (n < 0)
	{
		count += print_char('-');
		num = -n;
	}
	else
		num = n;

	if (num / 10)
		count += print_integer(num / 10);

	count += print_char((num % 10) + '0');

	return (count);
}

/**
 * print_uns - prints an unsigned integer to stdout
 * @n: unsigned integer to print
 *
 * Return: number of digits printed
 */
int print_uns(unsigned int n)
{
	if (n / 10)
		print_uns(n / 10);

	return (print_char(n % 10 + '0'));
}

/**
 * print_octal - prints an unsigned integer in octal format
 * @n: unsigned integer to print
 *
 * Return: number of characters printed
 */
int print_octal(unsigned int n)
{
	char buffer[100];
	int i = 0, j;

	if (n == 0)
	{
		write(1, "0", 1);
		return (1);
	}

	while (n > 0)
	{
		buffer[i] = (n % 8) + '0';
		n /= 8;
		i++;
	}

	for (j = i - 1; j >= 0; j--)
		write(1, &buffer[j], 1);

	return (i);
}

/**
 * print_hex - prints an unsigned integer in hexadecimal format
 * @n: unsigned integer to print
 * @uppercase: if 1, print in uppercase format; if 0, print in lowercase format
 *
 * Return: number of characters printed
 */
int print_hex(unsigned int n, int uppercase)
{
	char buffer[100];
	int i = 0, j;

	if (n == 0)
	{
		write(1, "0", 1);
		return (1);
	}

	while (n > 0)
	{
		int remainder = n % 16;

		if (remainder < 10)
			buffer[i] = remainder + '0';
		else if (uppercase)
			buffer[i] = remainder - 10 + 'A';
		else
			buffer[i] = remainder - 10 + 'a';

		n /= 16;
		i++;
	}

	for (j = i - 1; j >= 0; j--)
		write(1, &buffer[j], 1);

	return (i);
}

