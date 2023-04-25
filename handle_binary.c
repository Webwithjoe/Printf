#include <stdio.h>
#include "main.h"

/**
 * handle_binary - handle the case %b
 *
 * @arg: received arg
 *
 * @i: counter of the loop received
 *
 * @char_counter: pointer to the string counter
 *
 * @format: pointer to received string
 *
 * Return: return i the counter of the original loop
 */

int handle_binary(va_list arg, int *i, int *char_counter, const char *format)
{
	int x, num, y;
	char convert_string;
	int temp[150] = {0};

	switch (format[*i + 1])
	{
		case 'b':
			num = va_arg(arg, int);
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
			for (y = x; y >= 0; y--)
			{
				convert_string  = temp[y] + '0';
				write(1, &convert_string, 1);

				(*char_counter)++;
			}

			(*i)++;
			break;
		default:
			break;
	}
	return (0);
}
