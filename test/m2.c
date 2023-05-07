#include "main.h"

int main(void)
{
	int n = 2;

	_printf("%o", -1024);
	_putchar('\n');
	print_octal(&n, 1024);

	return (0);
}
