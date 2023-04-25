#include <stdlib.h>
#include "main.h"
/**
 * num_to_char - converts given integer to corresponding ascii decimal char
 * @num: integer to convert to char
 * Return: corresponing ascii decimal char
 */

int num_to_char(int num)
{
	int ascii_num_dec = 48;
	int ascii_num = 0;

	while (ascii_num_dec < 58)
	{
		if (ascii_num == num)
		{
			return (ascii_num_dec);
		}
		ascii_num_dec++;
		ascii_num++;
	}
	return (48);
}
/**
 * print_number - prints the number supplied on screen
 * @pos: current position in the larger string
 * @number: number to print
 * Return: length of number printed
 */

int print_number(int *pos, int number)
{
	int len = 0;
	int i, ascii_dec;
	int num = (number < 0) ? number * -1 : number;
	char *reverse_num;

	while ((num / 10 != 0) && num > 9)
	{
		num = num / 10;
		len++;
	}

	len += 1;
	num = (number < 0) ? number * -1 : number;
	reverse_num = malloc(sizeof(char) * len);

	for (i = 0; i < len; i++)
	{
		ascii_dec = num_to_char(num % 10);
		reverse_num[i] = ascii_dec;
		num = num / 10;
	}
	i--;
	if (number < 0)
	{
		len++;
		_putchar('-');
	}
	for (; i >= 0; i--)
	{
		_putchar(reverse_num[i]);
	}

	free(reverse_num);
	*pos = *pos + 2;
	return (len);
}
