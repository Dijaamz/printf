#include "main.h"

int _printf(const char *format, ...)
{
	int count = 0;

	va_list args;
	va_start(args, format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
				case 'c':
				{
					char c = va_arg(args, int);

					count += write(1, &c, 1);
					break;
				}
				case 's':
				{
					char *s = va_arg(args, char *);

					count += write(1, s, my_strlen(s));
					break;
				}
				case '%':
				{
					count += write(1, "%", 1);
					break;
				}
				case 'd':
				case 'i':
				{
					char buf[32];
					int n = va_arg(args, int);

					my_itoa(n, buf);
					count += write(1, buf, my_strlen(buf));
					break;
				}
				case 'u':
				{
					char buf[32];
					unsigned int n = va_arg(args, unsigned int);

					my_utoa(n, buf);
					count += write(1, buf, my_strlen(buf));
					break;
				}
				case 'o':
				{
					char buf[32];
					unsigned int n = va_arg(args, unsigned int);

					my_utoa_octal(n, buf);
					count += write(1, buf, my_strlen(buf));
					break;
				}
				case 'x':
				{
					char buf[32];
					unsigned int n = va_arg(args, unsigned int);

					my_utoa_hex_lowercase(n, buf);
					count += write(1, buf, my_strlen(buf));
					break;
				}
				case 'X':
				{
					char buf[32];
					unsigned int n = va_arg(args, unsigned int);

					my_utoa_hex_uppercase(n, buf);
					count += write(1, buf, my_strlen(buf));
					break;
				}
				default:
				{
					count += write(1, &(*format), 1);
					break;
				}
			}
		}
		else
		{
			count += write(1, &(*format), 1);
		}
		format++;
	}

	va_end(args);

	return (count);
}
