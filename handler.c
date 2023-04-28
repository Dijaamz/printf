#include "main.h"

/**
 * handle_format - handles a format specifier and prints corresponding output
 * @c: format specifier character
 * @args: variable argument list
 *
 * Return: number of characters printed
 */
int handle_format(char c, va_list args)
{
	switch (c)
	{
		case 'c':
			return (print_char(va_arg(args, int)));
		case 's':
			return (print_string(va_arg(args, char *)));
		case '%':
			return (print_percent());
		case 'd':
		case 'i':
			return (print_integer(va_arg(args, int)));
		case 'u':
			return (print_uns(va_arg(args, unsigned int)));
		case 'o':
			return (print_octal(va_arg(args, unsigned int)));
		case 'x':
			return (print_hex(va_arg(args, unsigned int), 0));
		case 'X':
			return (print_hex(va_arg(args, unsigned int), 1));
		case 'p':
			return (print_pointer(va_arg(args, void *)));
		default:
			write(1, "%", 1);
			write(1, &c, 1);
			return (0);
	}
}
