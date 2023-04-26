#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <limits.h>

int main(void)
{
	int len1, len2;


	len1 = _printf("%i + %i = %i\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));
	len2 = printf("%i + %i = %i\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));

	fflush(stdout);
	printf("_printf len is %i, printf len is %i\n", len1, len2);
	if (len1 != len2)
	{
		printf("not equal\n");
		fflush(stdout);
		return (1);
	}

	return (0);
}
