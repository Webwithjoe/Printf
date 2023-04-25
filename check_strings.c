#include "main.h"
/**
 * loop_string - loop over char in string
 * and prints the string
 *
 * @s: string received as an argument in
 * _printf
 *
 * @char_counter: pointer to the string counter
 *
 * Return: count of characters int the string
 */
void loop_string(char *s, int *char_counter)
{
	int y;

	for (y = 0; s[y] != '\0'; y++)
	{
		write(1, &s[y], 1);
		(*char_counter)++;
	};

}
/**
 * strgs - check cases of each specifier
 *
 * check cases of strings, characters and %
 *
 * %s %c %%
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
 * as each case increment i
 *
 * Return: return i the counter of the original loop
 */

int strgs(va_list arg, int *i, int *char_counter, const char *format, int chk)
{
	char *s, percent_sign;
	int c;

	percent_sign = '%';
	if (*i != chk)
		return (0);

	switch (format[*i + 1])
	{
		case 's':
			s = va_arg(arg, char *);
			if (s == NULL)
				return (-1);

			loop_string(s, char_counter);
			(*i)++;
			break;
		case 'c':
			c = va_arg(arg, int);
			if (c < 32 || c > 126)
				return (-1);

			write(1, &c, 1);
			(*char_counter)++;
			(*i)++;
			break;
		case '%':
			write(1, &percent_sign, 1);
			(*char_counter)++;
			(*i)++;
			break;
		default:
			break;
	}

	return (0);
}
