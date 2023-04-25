#include "main.h"
#include <stdlib.h>
/**
 * print_binary - converts number into binary format
 * @number: an unsigned int to be converted
 * @pos: current position within the larger string being printed
 * Return: length of the binary printed out
 */

int print_binary(int *pos, unsigned int number)
{
	char *binary_reversed;
	int num = number;
	int len = 0;
	int i = 0;

	while (num > 0)
	{
		num = num / 2;
		len++;
	}

	num = number;
	binary_reversed = malloc(sizeof(char) * len);

	while (num > 0)
	{
		binary_reversed[i] = num_to_char(num % 2);
		num = num / 2;
		i++;
	}

	i--;
	for (; i >= 0; i--)
	{
		_putchar(binary_reversed[i]);
	}
	*pos = *pos + 2;
	free(binary_reversed);
	return (len);
}
