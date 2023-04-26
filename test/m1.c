#include <stdio.h>
#include "main.h"
#include <stdlib.h>

int main(void)
{
	int len1, len2;

	len1 = _printf("%b\n", 1024);
	len2 = printf("0");

	printf("len1 is %d len2 is %d\n", len1, len2);

	fflush(stdout);

	return (0);
}
