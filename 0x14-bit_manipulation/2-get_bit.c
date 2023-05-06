#include <stdio.h>
#include "main.h"

/**
* get_bit - a function that returns the value of a bit
*at an index
* @n: long integer
* @index: index, starting from 0 of the bit
*you want to get
* Return: value of the bit at index or -1 if
*error occurs
*/

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= 64)
		return (-1);
	return ((n & (1 << index)) ? 1 : 0);
}
