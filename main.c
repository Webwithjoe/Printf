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
    int len;
   	len = _printf("Hello, world!\n"); 
	printf("%d", len);
	printf("\n");
	len = _printf("%d", 123);
	printf("%d", len);
	printf("\n");
	len = _printf("%s", "Hello"); 
	printf("%d", len);
	printf("\n");
	len = _printf("%c", 'A');
	printf("%d", len);
	printf("\n");
	len = _printf("%x", 255);
	printf("%d", len);
	printf("\n");
	len = _printf("%o", 255);
	printf("%d", len);
	printf("\n");
	len = _printf("%u", 123);
	printf("%d", len);
	printf("\n");


    
    return (0);
}
