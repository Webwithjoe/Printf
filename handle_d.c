#include "main.h"
/**
 * handle_d - prints passed string as arg
 *
 * @arg: received argument
 *
 * Return: count of string passed
 */
int handle_d(va_list arg)
{
	int num, val, temp, copy_int, count, z;

	num = va_arg(arg, int);
	if (num < 0)
	{
		_putchar('-');
		num = -(num);
	}

	count = 0;
	copy_int = num;

	while (copy_int != 0)
	{
		copy_int /= 10;
		count++;
	}
	z = 1;
	val = 1;
	while (z != count)
	{
		val *= 10;
		z++;
	}

	temp = num;
	while (val > 0)
	{
		temp = num / val;
		temp = temp % 10;
		val /= 10;
		temp = temp + '0';
		_putchar(temp);
	}
	return (count);
}
