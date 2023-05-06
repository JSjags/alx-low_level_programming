#include <stdio.h>
#include "main.h"

/**
* binary_to_uint - a function that converts a
*binary number to an unsigned int
* @b: pointer to a string of 0 and 1 chars
* Return: converted number or 0
**/

unsigned int binary_to_uint(const char *b)
{
	unsigned int i, int_num;

	int_num = 0;
	i = 0;
	if (!b)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		int_num <<= 1;
		if (b[i] & 1)
			int_num += 1;
		i += 1;
	}
	return (int_num);
}
