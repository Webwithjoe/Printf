#include "main.h"
/**
 * reverse - reverse numbers
 *
 * @binary_number: binary number received
 *
 * @x: size of array
 *
 * Return: array of binary number
 */
int *reverse(int binary_number[], int x)
{
	int y, i;
	static int reversed[150] = {0};

	i = 0;
	for (y = x; y >= 0; y--)
	{
		reversed[i]  = binary_number[y];
		i++;
	}
	return (reversed);
}
/**
 * convert_negative - convert binary to negative
 *
 * @binary_number: binary number received
 *
 * @x: size of array
 */
void convert_negative(int *binary_number, int x)
{
	int i, carry;

	carry = 1;
	for (i = 0; i <= x; i++) /* invert numbers */
	{
		if (binary_number[i] == 1)
			binary_number[i] = 0;
		else if (binary_number[i] == 0)
			binary_number[i] = 1;
	}

	for (i = x; i >= 0; i--) /* add one */
	{
		if (binary_number[i] + carry == 2)
		{
			binary_number[i] = 0;
			carry = 1;
		} else
		{
			binary_number[i] = binary_number[i] + carry;
			carry = 0;
		}
	}

	for (i = 0; i <= x; i++) /*printing*/
	{
		_putchar(binary_number[i] + '0');
	}
}

/**
 * handle_b - prints passed character as arg
 *
 * @arg: received argument
 *
 * Return: count which is one character passed
 */
int handle_b(va_list arg)
{
	int x, num, num2, y, *reversed;
	char convert_string;
	int temp[150] = {0};

	num = num2 = va_arg(arg, int);
	if (num == 0)
	{
		_putchar(0 + '0');
		return (1);
	}
	if (num < 0)
		num = -(int)num;
	x = 0;
	while (num != 0)
	{
		if (num % 2 == 0)
		{
			temp[x] = 0;
		} else
		{
			temp[x] = 1;
		}
		num /= 2;
		x++;
	}
	x--;
	reversed = reverse(temp, x);
	if (num2 > 0)
	{
		for (y = 0; y <= x; y++)
		{
			convert_string  = reversed[y] + '0';
			_putchar(convert_string);
		}
	} else
	{
		convert_negative(reversed, x);
	}
	return (++x);
}
