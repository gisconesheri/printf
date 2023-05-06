#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *  * main - Entry point
 *   *
 *    * Return: 0 on success, error code otherwise
 *     */
int main(void)
{
		int len, len2;

			len = _printf("% yohoo\n");
				len2 = printf("% yohoo\n");
					fflush(stdout);
						if (len != len2)
								{
											printf("Lengths differ.\n");
											printf("_printf len is %d, printf len is %d\n", len, len2);
													fflush(stdout);
															return (1);
																}
							return (0);
}
