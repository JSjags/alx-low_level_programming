#include "main.h"
/**
 * _strncat - Concatenates 2 strings using no more than n bytes from src
 * @dest: String
 * @src: String
 * @n: Integer
 * Return: String
 **/
char *_strncat(char *dest, char *src, int n)
{
	int dest_len, src_len;

	if (n <= 0)
	{
		return (dest);
	}

	dest_len = 0;
	src_len = 0;

	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}
	for (src_len = 0; src_len < n && src[src_len] != '\0'; src_len++)
	{
		dest[dest_len + src_len] = src[src_len];
	}

	dest[dest_len + src_len + 1] = '\0';

	return (dest);

}
