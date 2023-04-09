#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: size of argv
 * @argv: arguments
 * Return: Always 0
 **/
int main(int argc, char *argv[])
{
	int operand1;
	int operand2;
	int result;

	if (argc != 3)
	{
		printf("Error\n");
	}
	else
	{
		operand1 = atoi(argv[1]);
		operand2 = atoi(argv[2]);
		result = operand1 * operand2;
		printf("%d\n", result);
	}

	return (0);
}
