#include <stdio.h>
/**
 * main - Entry point
 * @argc: number of arguments
 * @argv: array of argument values
 * Return: Always 0
 **/
int main(int argc, char *argv[] __attribute__((unused)))
{
	int numofargs = argc - 1;

	printf("%d\n", numofargs);

	return (0);
}
