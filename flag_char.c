#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * handle_flag - check cases of each specifier
 *
 * @arg: arguments received
 *
 * @format: flag used to handle
 *
 * @char_counter: counter characters printed
 *
 * Return: digit argument
 */

int handle_flag(char format, va_list arg, int *char_counter)
{
	char negative, positive, space;
	int d;

	negative = '-';
	positive = '+';
	space = ' ';
	d = va_arg(arg, int);
	if (format == '+')
	{
		if (d < 0)
		{
			write(1, &negative, 1);
			(*char_counter)++;
		} else
		{
			write(1, &positive, 1);
			(*char_counter)++;
		}
	} else if (format == ' ')
	{
		if (d >= 0)
		{
			write(1, &space, 1);
			(*char_counter)++;
		} else
		{
			write(1, &negative, 1);
			(*char_counter)++;
		}
	}

	return (d);
}
