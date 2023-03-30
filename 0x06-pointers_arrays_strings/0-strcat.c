#include "main.h"
/**
 * _strcat - Concatenates two strings together
 *
 * @dest: Pointer to destination string
 * @src: Pointer to src
 *
 * Return: A pointer to resulting string
 **/

char *_strcat(char *dest, char *src)
{
	int dest_len;
	int src_len;

	for (dest_len = 0; dest[dest_len] != '\0'; dest_len++)
	{
	}
	for (src_len = 0; src[src_len] != '\0'; src_len++)
	{
		dest[dest_len + src_len] = src[src_len];
	}

	dest[dest_len + src_len] = '\0';

	return (dest);
}
