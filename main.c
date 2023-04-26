#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len, len1;

	_printf("%s",NULL);
	_printf("ahmed %% is %%");
	_printf("ahmed is an amazing dude %");
	_printf("\nnum: %i\n");
	len = _printf("num: %i\n", 123);
	len1 = printf("num: %i\n", 123);
    	printf("%d, %d\n",len, len1);
	return (0);
}
