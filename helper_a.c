#include "main.h"

/**
 * print_char - prints a character to stdout
 * @c: character to print
 *
 * Return: 1
 */
int print_char(char c)
{
	write(1, &c, 1);
	return (1);
}

/**
 * print_string - prints a string to stdout
 * @s: string to print
 *
 * Return: number of characters printed
 */
int print_string(char *s)
{
	int i;

	if (s == NULL)
		s = "(null)";

	for (i = 0; s[i]; i++)
		write(1, &s[i], 1);

	return (i);
}

/**
 * print_percent - prints a percent symbol to stdout
 *
 * Return: 1
 */
int print_percent(void)
{
	write(1, "%", 1);
	return (1);
}

/**
 * print_pointer - prints a memory address
 * @p: pointer to print
 *
 * Return: number of characters printed
 */
int print_pointer(void *p)
{
	unsigned long int ptrval = (unsigned long int)p;
	int count = 0;

	count += print_char('0');
	count += print_char('x');
	count += print_hex(ptrval, 0);

	return (count);
}