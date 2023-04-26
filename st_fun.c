#include "main.h"
/**
 * my_strlen - calculates the length of a string.
 * @s: is a pointer to a string.
 * Return: the length of the string as a size_t value.
 */
size_t my_strlen(const char *s)
{
	size_t len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	/**
	 * Return the final value of the counter variable,
	 * which is the length of the string.
	 */
	return (len);
}

/**
 * my_itoa - converts an integer to a string.
 * @value: an integer value to convert.
 * @str: pointer to a character array where the result will be stored.
 */
void my_itoa(int value, char *str)
{
	int i, j, negative = 0;

	if (value == 0)
	{
		str[0] = '0';
		str[1] = '\0';
		return;
	}

	if (value < 0)
	{
		negative = 1;
		value = -value;
	}
	while (value != 0)
	{
		int digit = value % 10;

		str[i++] = digit + '0';
		value /= 10;
	}

	if (negative)
	{
		str[i++] = '-';
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
 * my_utoa - converts an unsigned integer to a string.
 * @value: an unsigned integer value to convert.
 * @str: pointer to a character array where the result will be stored.
 */
void my_utoa(unsigned int value, char *str)
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
		int digit = value % 10;

		str[i++] = digit + '0';
		value /= 10;
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
 * my_utoa_octal - converts an unsigned integer to an octal string.
 * @value: an unsigned integer value to convert.
 * @str: pointer to a character array where the result will be stored.
 */
void my_utoa_octal(unsigned int value, char *str)
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
		int digit = value % 8;

		str[i++] = digit + '0';
		value /= 8;
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
