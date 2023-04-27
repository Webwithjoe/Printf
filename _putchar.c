#include "main.h"
/**
 * _putchar - print charachters
 *
 * @c: character recevied
 *
 * Return: 1
 */
int _putchar(char c) //_underscore putchar function 
{
	return (write(1, &c, 1));
}
