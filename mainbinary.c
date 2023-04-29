#include "main.h"
int main()
{
	int len;
	long int l, res;
	len = _printf("%b", 1024);
	_printf("\n");
	_printf("%d", len);
	_printf("\n");

	_printf("%b", -1024);
	_printf("\n");
	_printf("%d", len);
	_printf("\n");
	
	len = _printf("%b", 0);
	_printf("\n");
	_printf("%d",len);
	_printf("\n");
	
	l = (long int) INT_MAX + 1024;
	len = _printf("%b", l);
	_printf("\n");
	_printf("%d",len);
	_printf("\n");
	
	len = _printf("There is %b bytes in %b KB\n", 1024, 1);
	_printf("\n");
	_printf("%d",len);
	_printf("\n");
	
	len = _printf("%b - %b = %b\n", 2048, 1024, 1024);
	_printf("\n");
	_printf("%d",len);
	_printf("\n");

	res = (long int) INT_MAX * 2;
	len = _printf("%b + %b = %b\n", INT_MAX, INT_MAX, res);
	_printf("\n");
	_printf("%d",len);
	_printf("\n");
	return (0);
}
