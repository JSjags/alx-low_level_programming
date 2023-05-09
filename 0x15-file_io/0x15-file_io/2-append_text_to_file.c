#include "main.h"

/**
* append_text_to_file - a function that appends
*text at the end of a file
* @filename: file name
* @text_content: NULL terminated string
*to add at the end of the file
* Return: 1 on success, -1 on failure
**/

int append_text_to_file(const char *filename, char *text_content)
{
	int file, r, length;

	if (filename == NULL)
		return (-1);
	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
		return (-1);
	if (!text_content)
		return (1);
	length = 0;
	while (text_content[length])
		length += 1;
	r = write(file, text_content, length);
	if (r == -1)
		return (-1);
	r = close(file);
	if (r == -1)
		return (-1);
	return (1);
}
