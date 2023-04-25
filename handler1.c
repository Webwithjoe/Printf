#include <stdio.h>
#include "main.h"
/**
 * get_val - number of digits passed
 * and then get value of 1000 to
 * divide on to be able to print
 * digit by digit late
 *
 * @d: received int to check
 *
 * @char_counter: add to the total number
 * of charachters printed
 *
 * Return: value of 1000 to divide on
 */

int get_val(int d, int *char_counter)
{
	int copy_int, count, z, val;

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

	return (val);
}

/**
 * print_int - print digit of int
 *
 * @char_counter: to count characters
 *
 * @d: int passed
 *
 */
void print_int(int d, int *char_counter)
{
	int val, temp;

	if (d < 0)
	{
		d = -(d);
	}

	val = get_val(d, char_counter);
	temp = d;
	while (val != 0)
	{
		temp = d / val;
		temp = temp % 10;
		val /= 10;
		temp = temp + '0';
		_puts(temp);
	}

}

/**
 * nums - check cases of each specifier
 *
 * @arg: received arg
 *
 * @i: counter of the loop received
 *
 * @char_counter: pointer to the string counter
 *
 * @format: pointer to received string
 *
 * @chk: if another case worked
 * by comparing it to i counter
 * as each case incremetn i
 *
 * Return: return i the counter of the original loop
 */

int nums(va_list arg, int *i, int *char_counter, const char *format, int chk)
{
	char negative;
	int num = 0;

	if (*i != chk)
		return (0);

	switch (format[*i + 1])
	{
		case '+':
		case ' ':
			num = handle_flag(format[*i + 1], arg, char_counter);
			print_int(num, char_counter);
			*i = (*i) + 2;
			break;
		case 'd':
		case 'i':
			num = va_arg(arg, int);
			if (!num)
				return (-1);

			if (num < 0)
			{
				negative = '-';
				_puts(negative);
				(*char_counter)++;
			}

			print_int(num, char_counter);
			(*i)++;
			break;
		default:
			break;
	}

	return (0);
}
