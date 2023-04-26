#include "main.h"

/**
 * my_utoa_hex - converts an unsigned integer to a hexadecimal string
 * @value: the unsigned integer to convert
 * @str: a pointer to a character array to store the resulting string
 * @uppercase: a flag indicating whether to use uppercase letters for A-F
 * Returns: none
 */
void my_utoa_hex(unsigned int value, char *str, int uppercase)
{
	int i = 0;
	int j;

	if (value == 0)
	{
		str[0] = '0';
		str[1] = '\0';
		return;
	}

	while (value != 0)
	{
		int digit = value % 16;

		if (digit < 10)
		{
			str[i++] = digit + '0';
		} else
		{
			str[i++] = (uppercase ? 'A' : 'a') + digit - 10;
		}
		value /= 16;
	}

	str[i] = '\0';

	j = i - 1;
	i = 0;
	while (i < j)
	{
		char tmp = str[i];

		str[i] = str[j];
		str[j] = tmp;
		i++;
		j--;
	}
}

/**
 * my_utoa_hex_uppercase - Convert an unsigned integer
 *  to a hexadecimal string in uppercase format.
 * @value: the unsigned integer to be converted.
 * @str: the output buffer to store the resulting string.
 */
void my_utoa_hex_uppercase(unsigned int value, char *str)
{
	my_utoa_hex(value, str, 1);
}

/**
 * my_utoa_hex_lowercase - Convert an unsigned integer
 *  to a hexadecimal string in lowercase format.
 * @value: the unsigned integer to be converted.
 * @str: the output buffer to store the resulting string.
 */
void my_utoa_hex_lowercase(unsigned int value, char *str)
{
	my_utoa_hex(value, str, 0);
}
