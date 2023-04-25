#include <stdio.h>
#include "main.h"

int main(void)
{
	int len1, len2;

	_printf("%b\n", -75);

	len1 = _printf("number is %d\n", 321);
	len2 = printf("number is %d\n", 321);

	_printf("len1 is %d, len2 is %d\n", len1, len2);

	return (0);
}
