#include "main.h"
#include <string.h>
/**
 * strcat.c - Concatenates two strings together
 *
 * @dest: Pointer to destination string
 * @src: Pointer to src
 *
 * Return: A pointer to resulting string
 **/

char *_strcat(char *dest, char *src)
{
	size_t dest_len = (sizeof(*dest) / sizeof(char));
	size_t src_len = (sizeof(*src) / sizeof(char));
	size_t i;

	for (i = 0; i < src_len && src[i] != '\0'; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';

	return (dest);
}
