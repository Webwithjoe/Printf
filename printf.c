#include "main.h"
#include <limits.h>
/**
 * handle_cases - check all cases
 *
 * call different functions to check
 * different cases
 *
 * @format: pointer to received string
 *
 * @arg: received arguments
 *
 * Return: charachter counter
 */

int handle_cases(const char *format, va_list arg)
{
	int i, cmp_i, char_counter;

	char_counter = 0;
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			cmp_i = i;
			strgs(arg, &i, &char_counter, format, cmp_i);

			if (cmp_i == i)
			{
				write(1, &format[i], 1);
				char_counter++;
			}

		} else
		{
			write(1, &format[i], 1);
			char_counter++;
		}
	}
	return (char_counter);
}

/**
 * _printf - function that prints
 *
 * @format: pointer to received string
 *
 * I use the i to calculate the total
 * charachters in the string
 *
 * I use char character to calculate
 * the total characters of the arguments
 *
 * Return: Always 0
 */
int _printf(const char *format, ...)
{
	int char_counter1;
	va_list arg;
	char new_line;

	new_line = 10;
	if (format == NULL)
		return (-1);

	va_start(arg, format);
	char_counter1 = handle_cases(format, arg);
	write(1, &new_line, 1);
	va_end(arg);
	return (char_counter1);
}
