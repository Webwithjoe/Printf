#include "main.h"
/**
 * _puts - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 *
 */
void _puts(char c)
{
	write(1, &c, 1);;
	write(1, "\0", 1);;

}

