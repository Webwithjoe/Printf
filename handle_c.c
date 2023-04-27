#include "main.h"
/**
 * handle_c - prints passed character as arg
 *
 * @arg: received argument
 *
 * Return: count which is one character passed
 */

int handle_c(va_list arg)
{
	char c;

	c = va_arg(arg, int);
	if (c < 32 || c > 126)
	{
		if (c == 10)
			_putchar('\n');
		else
			return (-1);
	}

	_putchar(c);
	return (1);
}
