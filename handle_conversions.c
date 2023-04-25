#include "main.h"
#include <stdio.h>
/**
  * convert_hex - convert to hex
  *
  * @num: number to convert
  *
  * @char_counter: count characters printed
  */
void convert_hex(long num, int *char_counter)
{
	long val, x, y;
	char arr[20];
	char *hex = "0123456789abcdef";

	val = num;
	x = 0;
	while (val != 0)
	{
		arr[x] = hex[val % 16];
		val  /= 16;
		x++;
	}

	arr[x] = '\0';
	x--;
	for (y = x; y >= 0; y--)
	{
		write(1, &arr[y], 1);
		(*char_counter)++;
	}
}

/**
  * convert_octal - convert to octal
  *
  * @num: number to convert
  *
  * @char_counter: count characters printed
  */

void convert_octal(long num, int *char_counter)
{
	long val, x, y;
	char arr[20];
	char *hex = "0123456789abcdef";

	val = num;
	x = 0;
	while (val != 0)
	{
		arr[x] = hex[val % 8];
		val  /= 8;
		x++;
	}

	arr[x] = '\0';
	x--;
	for (y = x; y >= 0; y--)
	{
		write(1, &arr[y], 1);
		(*char_counter)++;
	}
}

/**
 * print_s - print digit of int
 *
 * @char_counter: to count characters
 *
 * @d: int passed
 */
void print_s(unsigned long int d, int *char_counter)
{
	unsigned long int val, temp, copy_int, z, count;

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
  * convers - check cases
  *
  * %u %o %x %X
  *
  * @arg: arguments passed
  *
  * @i: counter main loop
  *
  * @char_counter: count characters printed
  *
  * @form: character to check
  *
  * @chk: if another case worked
  * by comparing it to i counter
  * as each case incremetn i
  *
  * Return: i counter main loop
  */

int convers(va_list arg, int *i, int *char_counter, const char *form, int chk)
{
	long int num;

	if (*i != chk)
		return (0);

	switch (form[*i + 1])
	{
		case 'u':
			num = va_arg(arg, unsigned long int);
			print_s(num, char_counter);
			(*i)++;
			break;
		case 'x':
			num = va_arg(arg, long);
			convert_hex(num, char_counter);
			(*i)++;
			break;
		case 'o':
			num = va_arg(arg, long);
			convert_octal(num, char_counter);
			(*i)++;
			break;
		default:
			break;
	}

	return (0);
}
