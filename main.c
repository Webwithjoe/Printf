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

	int len, len2;
	long int l;

	len = _printf("%d", 1024);
	printf("\n");
	len2 = printf("%d", 1024);
	printf("\n");

	printf("%d", len);
	printf("\n");
	printf("%d", len2);
	printf("\n");
    
	len = _printf("%d", -1024);
	printf("\n");
	len2 = printf("%d", -1024);
	printf("\n");
	printf("%d", len);
	printf("\n");
	printf("%d", len2);
	printf("\n");
	

	
	len = _printf("%d", 0);
	printf("\n");
	len2 = printf("%d", 0);
	printf("\n");
	printf("%d", len);
	printf("\n");
	printf("%d", len2);
	printf("\n");

	len = _printf("%d", INT_MAX);
	printf("\n");
	len2 = printf("%d", INT_MAX);
	printf("\n");
	
	printf("%d", len);
	printf("\n");
	printf("%d", len2);
	printf("\n");
	
	len = _printf("%d", INT_MIN);
	printf("\n");
	len2 = printf("%d", INT_MIN);
	printf("\n");
	
	printf("%d", len);
	printf("\n");
	printf("%d", len2);
	printf("\n");
	
	
	l = (long int) INT_MAX + 1024;
	
	len = _printf("%d", l);
	printf("\n");
	len2 = printf("%d", l);
	printf("\n");
	
	printf("%d", len);
	printf("\n");
	printf("%d", len2);
	printf("\n");
	
	l = (long int) INT_MIN - 1024;
	
	len = _printf("%d", l); 
	printf("\n");
	len2 = printf("%d", l); 
	printf("\n");
	
	printf("%d", len);
	printf("\n");
	printf("%d", len2);
	printf("\n");

	len = _printf("There is %d bytes in %d KB\n", 1024, 1);
	printf("\n");
	len2 = printf("There is %d bytes in %d KB\n", 1024, 1);
	printf("\n");
	printf("%d", len);
	printf("\n");
	printf("%d", len2);
	printf("\n");
	
	len = _printf("%d - %d = %d\n", 1024, 2048, -1024);
	len2 = printf("%d - %d = %d\n", 1024, 2048, -1024);
	printf("%d", len);
	printf("\n");
	printf("%d", len2);
	printf("\n");

	len = _printf("%d + %d = %d\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));
	printf("\n");
	len2 = printf("%d + %d = %d\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));
	printf("\n");
	printf("%d", len);
	printf("\n");
	printf("%d", len2);
	printf("\n");
	
	len = _printf("%i", 1024);
	printf("\n");
	len2 = printf("%i", 1024);
	printf("\n");
	printf("%d", len);
	printf("\n");
	printf("%d", len2);
	printf("\n");
	
	len = _printf("%i", -1024);
	printf("\n");
	len2 = printf("%i", -1024);
	printf("\n");
	printf("%d", len);
	printf("\n");
	printf("%d", len2);
	printf("\n");

	len = _printf("%i", 0);
	printf("\n");
	len2 = printf("%i", 0);
	printf("\n");
	printf("%d", len);
	printf("\n");
	printf("%d", len2);
	printf("\n");

	len = _printf("%i", INT_MAX);
	printf("\n");
	len2 = printf("%i", INT_MAX);
	printf("\n");
	printf("%d", len);
	printf("\n");
	printf("%d", len2);
	printf("\n");
	
	len = _printf("%i", INT_MIN);
	printf("\n");
	len2 = printf("%i", INT_MIN);
	printf("\n");
	printf("%d", len);
	printf("\n");
	printf("%d", len2);
	printf("\n");
	
	l = (long int) INT_MAX + 1024;
	
	len = _printf("%i", l);
	printf("\n");
	len2 = printf("%i", l);
	printf("\n");
	printf("%d", len);
	printf("\n");
	printf("%d", len2);
	printf("\n");
	
	l = (long int) INT_MIN - 1024;
	
	len = _printf("%i", l);
	printf("\n");
	len2 = printf("%i", l);
	printf("\n");
	printf("%d", len);
	printf("\n");
	printf("%d", len2);
	printf("\n");
	
	len = _printf("There is %i bytes in %i KB\n", 1024, 1);
	printf("\n");
	len2 = printf("There is %i bytes in %i KB\n", 1024, 1);
	printf("\n");
	printf("%d", len);
	printf("\n");
	printf("%d", len2);
	printf("\n");
	
	len = _printf("%i - %i = %i\n", 1024, 2048, -1024);
	printf("\n");
	len2 = printf("%i - %i = %i\n", 1024, 2048, -1024);
	printf("\n");
	printf("%d", len);
	printf("\n");
	printf("%d", len2);
	printf("\n");
	
	len = _printf("%i + %i = %i\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));
	printf("\n");
	len2 = printf("%i + %i = %i\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));
	printf("\n");
	printf("%d", len);
	printf("\n");
	printf("%d", len2);
	printf("\n");

	len = _printf("%d == %i\n", 1024, 1024);
	printf("\n");
	len2 = printf("%d == %i\n", 1024, 1024);
	printf("\n");
	printf("%d", len);
	printf("\n");
	printf("%d", len2);
	printf("\n");
	
	len = _printf("iddi%diddiiddi\n", 1024);
	printf("\n");
	len2 = printf("iddi%diddiiddi\n", 1024);
	printf("\n");
	printf("%d", len);
	printf("\n");
	printf("%d", len2);
	printf("\n");
	
	len = _printf("%d", 10000);
	printf("\n");
	len2 = printf("%d", 10000);
	printf("\n");
	printf("%d", len);
	printf("\n");
	printf("%d", len2);
	printf("\n");
	
	len = _printf("%i", 10000);
	printf("\n");
	len2 = printf("%i", 10000);
	printf("\n");
	printf("%d", len);
	printf("\n");
	printf("%d", len2);
	printf("\n");

    return (0);
}
