#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * print_long - print digit of long
 *
 * @char_counter: to count characters
 *
 * @d: long number passed
 */
void print_long(long d, int *char_counter)
{
	long val, temp, copy_int, count, z;

	count = 0;
	copy_int = d;
	while (copy_int != 0)
	{
		copy_int /= 10;
		count++;
	}

	*char_counter += count;
	z = 1;
	val = 1;
	while (z != count)
	{
		val *= 10;
		z++;
	}

	temp = d;
	while (val != 0)
	{
		temp = d / val;
		temp = temp % 10;
		val /= 10;
		temp = temp + '0';
		write(1, &temp, 1);
	}
}

/**
 * longc - check cases h and l
 *
 * @arg: arguments passed
 *
 * @char_counter: to count characters
 *
 * @i: main counter in loop
 *
 * @format: flag used to handle
 *
 * @chk: if another case worked
 * by comparing it to i counter
 * as each case incremetn i
 *
 * Return: i the main counter in loop
 */


int longc(va_list arg, int *i, int *char_counter, const char *format, int chk)
{
	long num1;
	int num;
	char negative;

	if (*i != chk)
		return (0);

	switch (format[*i + 1])
	{
		case 'l':
			if (sizeof(num1) == sizeof(long))
				num1 = va_arg(arg, long);

			print_long(num1, char_counter);
			(*i) = (*i) + 2;
			break;
		case 'h':
			num = va_arg(arg, int);
			num1 = 0;
			if (num < 0)
			{
				negative = '-';
				write(1, &negative, 1);
				(*char_counter)++;
			}

			print_int(num, num1, char_counter);
			(*i) = (*i) + 2;
			break;
		default:
			break;
	}

	return (0);
}

