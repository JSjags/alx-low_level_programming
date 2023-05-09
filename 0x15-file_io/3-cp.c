#include "main.h"
#define BUF_SIZE 1024

/**
* main - main
* @argc: number of arguments
* @argv: pointer to the array of arguments
* Return: Always 0
**/

int main(int argc, char **argv)
{
	int val0, val1, res0, res1;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buffer = malloc(sizeof(char) * BUF_SIZE);
	if (!buffer)
		return (0);

	val1 = open(argv[1], O_RDONLY);
	error_98(val1, buffer, argv[1]);
	val0 = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	error_99(val0, buffer, argv[2]);
	do {
		res0 = read(val1, buffer, BUF_SIZE);
		if (res0 == 0)
			break;
		error_98(res0, buffer, argv[1]);
		res1 = write(val0, buffer, res0);
		error_99(res1, buffer, argv[2]);
	} while (res1 >= BUF_SIZE);
	res0 = close(val0);
	error_100(res0, buffer);
	res0 = close(val1);
	error_100(res0, buffer);
	free(buffer);
	return (0);
}

/**
* error_checker_98 - checks for error 98
* @val0: the value to check
* @buffer: the buffer
* @argv: argument
**/
void error_checker_98(int val0, char *buffer, char *argv)
{

	if (val0 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv);
		free(buffer);
		exit(98);
	}
}

/**
* error_checker_99 - checks for error 99
* @val0: value to check
* @buffer: the buffer
* @argv: argument
*/
void error_99(int val0, char *buffer, char *argv)
{
	if (val0 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv);
		free(buffer);
		exit(99);
	}
}
/**
* error_checker_100 - checks for error 100
* @val0: the value to check
* @buffer: the buffer
*/
void error_100(int val0, char *buffer)
{
	if (val0 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", f0);
		free(buffer);
		exit(100);
	}
}
