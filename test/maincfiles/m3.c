#include <stdio.h>
#include "main.h"
#include <stdlib.h>

int main(void)
{
	int len1, len2;


	len1 = _printf("%i", 10000);
	len2 = printf("%i", 10000);

	fflush(stdout);
	printf("_printf len is %d, printf len is %d\n", len1, len2);
	if (len1 != len2)
	{
		printf("not equal\n");
		fflush(stdout);
		return (1);
	}

	return (0);
}
