#include "main.h"
#define BUF_SIZE 1024

/**
 * main - entry point
 * @argc: number of arguments passed to the function.
 * @argv: two files.
 *
 * Return: integer number.
 */
int main(int argc, char *argv[])
{
	int inputF_D, outputF_D, nBytes_r, nBytes_w;
	char text[BUF_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	inputF_D = open(argv[1], O_RDONLY);
	if (inputF_D == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
			argv[1]);
		exit(98);
	}
	outputF_D = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (outputF_D == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while ((nBytes_r = read(inputF_D, text, BUF_SIZE)) > 0)
	{
		nBytes_w = write(outputF_D, text, nBytes_r);
		if (nBytes_w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n",
				argv[2]);
			exit(99);
		}
	}
	if (nBytes_r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
			argv[1]);
		exit(98);
	}
	close_f(inputF_D);
	close_f(outputF_D);
	return (0);
}

/**
 * close_f - close an opened file
 * @F_D: file descriptor.
 *
 * Return: void.
 */
void close_f(int F_D)
{
	if (close(F_D) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", FD);
		exit(100);
	}
}