#include "main.h"
int main()
{
	int len, len2; 
	
	/* case digit */
	len = _printf("number:%d bla\n",1232);
	len2 = printf("number:%d bla\n",1232);
	printf("length: %d\n", len);
	printf("length: %d\n", len2);
	
	/* case unknown */
	_printf("%r\n"); 
	
	/* unknown case */
	_printf("c is cool %k but why not working");

	 /* case char */
	
	len = _printf("char %c\n", 'f');
	len2 = printf("char %c\n", 'f');
	printf("length: %d\n", len);
	printf("length: %d\n", len2);

	/* case string */
	len = _printf("m is %s\n", "cool");
	len2 = printf("m is %s\n", "cool");
	printf("length: %d\n", len);
	printf("length: %d\n", len2);
	
	 /* case string NULL */ 
	_printf("%s\n", NULL);
	printf("\n");
	/* case % at the end of arg */
	_printf("m and x are cool %");
	_printf("\n");


	 /* case % */
	len = _printf("m and x are cool %% see\n");
	len2 = printf("m and x are cool %% see\n");
	printf("length: %d\n", len);
	printf("length: %d\n", len2);


	return (0);
}

