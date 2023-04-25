#include "main.h"
/**
 * _puts - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 *
 */
int _puts(char c)
{
	return (write(1, &c, 1));
}

