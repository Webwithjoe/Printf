#include "main.h"
#include <stdio.h>
/**
  * convert_hex - convert to hex
  *
  * @num: number to convert
  *
  * @char_counter: count characters printed
  */
void convert_hex(int num, int *char_counter)
{
	int val, x, y;
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

void convert_octal(int num, int *char_counter)
{
	int val, x, y;
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
	int num;
	long num1 = 0;

	if (*i != chk)
		return (0);

	switch (form[*i + 1])
	{
		case 'u':
			num = va_arg(arg, int);
			if (num < 0)
				return (-1);

			print_int(num, num1, char_counter);
			(*i)++;
			break;
		case 'x':
			num = va_arg(arg, int);
			convert_hex(num, char_counter);
			(*i)++;
			break;
		case 'o':
			num = va_arg(arg, int);
			convert_octal(num, char_counter);
			(*i)++;
			break;
		default:
			break;
	}

	return (0);
}
